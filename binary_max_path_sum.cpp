#include<iostream>
using namespace std;

class NODE{
    public:
    int data;
    NODE* right;
    NODE* left;

    NODE(int val){
        data=val;
        right=NULL;
        left=NULL;
    }
};
int getMAXsum_NODES(NODE* root,int &ans){
    if(root==NULL){
        return 0;
    }
    int LFT=getMAXsum_NODES(root->left,ans);
    int RHT=getMAXsum_NODES(root->right,ans);

    int NODEmax=max(max(root->data,root->data+LFT+RHT),max(root->data+LFT,root->data+RHT));
    ans=max(ans,NODEmax);
    int TOreturn=max(max(root->data+LFT,root->data+RHT),root->data);
    return TOreturn;
}


int maxSUM_NODES(NODE* root){
    int ans=INT32_MIN;
    getMAXsum_NODES(root,ans);

    return ans;
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
    

    cout<<maxSUM_NODES(root)<<endl;

    return 0;
}