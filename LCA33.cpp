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

bool getPath(NODE* root,int n,vector<int> &path){

    if(root==NULL){
        return false;
    }
    path.push_back(root->data);

    if(root->data==n){
        return true;
    }
    if(getPath(root->left,n,path) || getPath(root->right,n,path)){
        return true;
    }

    path.pop_back();

    return false;
}

int LCA(NODE* root,int n1,int n2){
    vector<int>path1,path2;

    if(!getPath(root,n1,path1) || !getPath(root,n2,path2)){
        return -1;
    }

    int pc;
    for(pc=0;pc<min(path1.size(),path2.size());pc++){
        if(path1[pc]!=path2[pc]){
            break;
        }
    }

    return path1[pc-1];
}

NODE* LCA2(NODE* root,int n1,int n2){
    if(root==NULL){
        return NULL;
    }
    if(root->data==n1 || root->data==n2){
        return root;
    }

    NODE* LFT=LCA2(root->left,n1,n2);
    NODE* RHT=LCA2(root->right,n1,n2);

    if(LFT  &&  RHT){
     return root;
    }

    if(LFT!=NULL){
        return LFT;
    }
    else{
        return RHT;
    }
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
    
    cout<<LCA(root,13,15)<<endl;
    NODE* rada=LCA2(root,13,15);
    cout<<rada->data<<endl;

    return 0;
}