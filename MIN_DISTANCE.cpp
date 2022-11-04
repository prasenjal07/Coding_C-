#include<iostream>
#include<vector>

using namespace std;

class NODE{
    public:
    int data;
    NODE* left;
    NODE* right;

    NODE(int val){
        data=val;
        right=NULL;
        left=NULL;
    }
};

NODE* LCA(NODE* root,int n1, int  n2){
    if(root==NULL){
        return NULL;
    }

    if(root->data==n1 || root->data==n2){
        return root;
    }

    NODE* LFT=LCA(root->left,n1,n2);
    NODE* RHT=LCA(root->right,n1,n2);

    if(LFT!=NULL && RHT!=NULL){
        return root;
    }
    if(LFT==NULL && RHT==NULL){
        return NULL;
    }
    if(LFT!=NULL){
        return LFT;
    }
    else
    return RHT;
}
int DIST(NODE* root,int key,int lvl){
    if(root==NULL){
        return -1;
    }

    if(root->data==key){
        return lvl;
    }
    int LFTT=DIST(root->left,key,lvl+1);
    int RHTT=DIST(root->right,key,lvl+1);
    if(LFTT!=-1){
        return LFTT;
    }
    else{
        return RHTT;
    }
}

int MINDIST(NODE* root,int n1,int n2){

   
    NODE* roottemp=LCA(root,n1,n2);

    int d1=DIST(roottemp,n1,0);
    int d2=DIST(roottemp,n2,0);

    return d1+d2;
}


int main(){
     NODE* root=new NODE(1);
    root->left=new NODE(2);
    root->right=new NODE(3);
    root->left->left=new NODE(4);
    root->left->right=new NODE(5);
    root->right->left=new NODE(6);
    root->right->right=new NODE(7);

    root->left->left->left=new NODE(8);
    root->left->left->right=new NODE(9);
    root->left->right->left=new NODE(10);
    root->left->right->right=new NODE(11);
    root->right->left->left=new NODE(12);
    root->right->left->right=new NODE(13);
    root->right->right->left=new NODE(14);
    root->right->right->right=new NODE(15);


    int ans=MINDIST(root,4,15);
    cout<<ans<<endl;

    return 0;
}