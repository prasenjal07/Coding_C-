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

NODE* BUILTaTREE(int postorder[],int inorder[],int st,int ed){
    static int i=ed;
    if(st>ed){
        return NULL;
    }
    int current=postorder[i];
    
    NODE* node= new NODE(current);
    i--;
    if(st==ed){
        return node;
    }
    
    int pos=POSITION(inorder,st,ed,current);

    node->right=BUILTaTREE(postorder,inorder,pos+1,ed);
    node->left=BUILTaTREE(postorder,inorder,st,pos-1);

    return node;
}


void INORDER(NODE* &root){
    if(root==NULL){
        return;
    }

    INORDER(root->left);
    cout<<root->data<<" ";
    INORDER(root->right);
}
int main(){
    int postorder[]={4,2,5,3,1};
    int inorder[]={4,2,1,5,3};


    NODE* rada=BUILTaTREE(postorder,inorder,0,4);
    INORDER(rada);

    return 0;

}