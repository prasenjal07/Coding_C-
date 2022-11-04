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


int POSITION(int inorder[],int st,int ed,int current){
    for(int i=st;i<=ed;i++){
        if(inorder[i]==current){
            return i;
        }
    }
    return -1;
}
NODE* BUILDaTREE(int preorder[],int inorder[],int st,int ed){
    static int i=0;
    if(st>ed){
       return NULL;
    }
    int current=preorder[i];
    i++;

    NODE* node=new NODE(current);
     if(st==ed){
        return node;
     }
    int pos=POSITION(inorder,st,ed,current);

    node->left=BUILDaTREE(preorder,inorder,st,pos-1);
    node->right=BUILDaTREE(preorder,inorder,pos+1,ed);


    return node;

}


void INORDER(NODE* root){
    if(root==NULL){
        return;
    }
    INORDER(root->left);
    cout<<root->data<<" ";
    INORDER(root->right);
}

int main(){
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};

    NODE*rada=BUILDaTREE(preorder,inorder,0,4);
    INORDER(rada);
    return 0;
}