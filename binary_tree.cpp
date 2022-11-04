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


void preorder(NODE* &root){

    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void INORDER(NODE* &root){
    if(root==NULL){
        return;
    }

    INORDER(root->left);
    cout<<root->data<<" ";
    INORDER(root->right);
}

void postorder(NODE* &root){
    if(root==NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
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
    


    preorder(root);
    cout<<endl;
    INORDER(root);
    cout<<endl;
    postorder(root);



    return 0;
}