#include<iostream>
#include<vector>

using namespace std;


class NODE{
      public:
      int data;
      NODE *left,*right;

      NODE(int val){
        data=val;
        right=NULL;
        left=NULL;
      }
};

NODE* make_BST(int preorder[],int* preIDX,int key,int min,int max,int n){
    if(*preIDX > n){
        return  NULL;
    }
    NODE* root=NULL;
    if(key>min && key<max){
    root=new NODE(key);
    *preIDX=*preIDX+1;

    if(*preIDX<n){
        root->left=make_BST(preorder,preIDX,preorder[*preIDX],min,key,n);
    }
    if(*preIDX<n){
        root->right=make_BST(preorder,preIDX,preorder[*preIDX],key,max,n);
    }
    }

    return root;
}


void preorderr(NODE* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorderr(root->left);
    preorderr(root->right);

}
int main(){

    int preorder[]={7,5,4,6,8,9};
    int n=5;
    int preIDX=0;

    NODE* node=make_BST(preorder,&preIDX,preorder[0],INT16_MIN,INT16_MAX,n);
    preorderr(node);

    return 0;

}
