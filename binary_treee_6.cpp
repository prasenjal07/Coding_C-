#include<iostream>
#include<vector>

using namespace std;

class NODE{
    public:
   int data;
   NODE *right,*left;

   NODE(int val){
    data=val;
    right=NULL;
    left=NULL;
   }
};

void FLATTEN(NODE* root){
if(root==NULL  || (root->left==NULL&&root->right==NULL)){
    return;
}
    if(root->left!=NULL){
        FLATTEN(root->left);
        NODE* temp=root->right;
        root->right=root->left;
        root->left=NULL;
        NODE* t=root->right;
        while(t->right!=NULL){
            t=t->right;
        }
        t->right=temp;
            }
        FLATTEN(root->right);
}

void display_LL(NODE* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<"  ";
    display_LL(root->right);
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

    FLATTEN(root);

    display_LL(root);

    return 0;
}