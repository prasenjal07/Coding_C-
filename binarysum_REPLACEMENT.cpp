#include<iostream>
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

void SUM_REPLACEMENT(NODE* root){


if(root==NULL){
    return;
}
    SUM_REPLACEMENT(root->left);
    SUM_REPLACEMENT(root->right);

    if(root->left!=NULL){
        root->data+=root->left->data;
    }
    if(root->right!=NULL){
        root->data+=root->right->data;
    }
}
int height(NODE* root){
    if(root==NULL){
        return 0;
    }
    int lh=height(root->left);
    int rh=height(root->right);

    return (max(lh,rh)+1);
}

bool BALANCED_binary(NODE* root){

    if(root==NULL){
        return true;
    }

    if(BALANCED_binary(root->left) == false){
        return false;
    }
    if(BALANCED_binary(root->right) == false){
        return false;
    }
    int lh=0,rh=0;
    lh=height(root->left);
    rh=height(root->right);
    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }
}

// CHECK BINARY OPTIMISED VERSION

bool chk_BALANCED_binary(NODE* root,int* ht){
    int lh=0,rh=0;
    if(root==NULL){
        return true;
    }
    if(chk_BALANCED_binary((root->left),&lh)==false){
        return false;
    }
    if(chk_BALANCED_binary((root->right),&rh)==false){
        return false;
    }

    *ht=max(lh,rh)+1;

    if(abs(lh-rh)<=1){
        return true;
    }
    else{
        return false;
    }

}

void preorder(NODE* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
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

   // preorder(root);
    // SUM_REPLACEMENT(root);
    // cout<<endl;
    // preorder(root);
    if(BALANCED_binary(root)){
        cout<<"true bhenchoddd";
    }
    int ht=0;
    cout<<endl; 
     if(chk_BALANCED_binary(root,&ht)){
        cout<<"true bhenchoddd";
    }
 return 0;

}