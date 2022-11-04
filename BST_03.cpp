#include<iostream>
#include<vector>

using namespace std;


class NODE{
    public:
    int data;
    NODE *left,*right;
    NODE(int val){
        data = val;
        right=left=NULL;
    }

};

NODE* make_TREE(int preorder[],int* preIDX,int key,int min,int max,int n){
    if(*preIDX > n){
        return NULL;
    }
    NODE* node=NULL;
    if(key>min && key<max){
    node=new NODE(key);
    *preIDX++;
    if(*preIDX<n){
        node->left=make_TREE(preorder,preIDX,preorder[*preIDX],min,key,n);
    }
    if(*preIDX<n){
        node->right=make_TREE(preorder,preIDX,preorder[*preIDX],key,max,n);
    }
    }

return node;
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
      int preorde[]={7,5,4,6,8,9};
      int n=5;
      int preIDX=0;
      NODE* root=make_TREE(preorde,&preIDX,preorde[0],INT16_MIN,INT16_MAX,n);
      preorder(root);
      return 0;
}