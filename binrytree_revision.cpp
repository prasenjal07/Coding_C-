#include<iostream>
using namespace std;

class NODE{
    public:
    int data;
    NODE* left;
    NODE* right;

    NODE(int val){
        data=val;
        left=NULL;
        right=NULL;
    }

};

int findd_mah_element(int inorder[],int st,int ed,int current){
    for(int j=st;j<=ed;j++){
        if(inorder[j]==current){
            return j;
        }
    }
}

NODE* built_a_tree(int preorder[],int inorder[],int st,int ed){

    if(st>ed){
        return NULL;
    }
    static int i=0;

    int current = preorder[i];
    i++;
    NODE* node = new NODE(current);
    if(st==ed){
        return node;
    }
    int pos=findd_mah_element(inorder,st,ed,current);

    node->left=built_a_tree(preorder,inorder,st,pos-1);
    node->right=built_a_tree(preorder,inorder,pos+1,ed);
}
void INORDER(NODE* node){
    if(node==NULL){
        return;
    }

    INORDER(node->left);
    cout<<node->data<<" ";
    INORDER(node->right);
}

int main(){
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    NODE* root=built_a_tree(preorder,inorder,0,4);
    INORDER(root);

    return 0;
}