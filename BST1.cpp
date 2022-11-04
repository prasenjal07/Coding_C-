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
NODE* Binary_search(NODE* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(root->data<key){
        return Binary_search(root->right,key);
    }
    return Binary_search(root->left,key);
}
NODE* BST(NODE* root,int val){
    if(root==NULL){
        return new NODE(val);
    }
    if(val<root->data){
        root->left=BST(root->left,val);
    }
    else{
        root->right=BST(root->right,val);
    }
}

void inorder(NODE* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

int main(){
   /* NODE* root=NULL;
    root=BST(root,5);
    BST(root,1);
    BST(root,7);
    BST(root,9);
    BST(root,2);
    BST(root,4);

    inorder(root);*/
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
    
    
    if(Binary_search(root,10)==NULL){
        cout<<"key is not present";
    }
    else{
        cout<<"key is present";
    }

    return 0;
}