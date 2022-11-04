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


int POSITION(int inorder[],int st,int ed,int current){
    for(int i=st;i<=ed;i++){
        if(inorder[i]==current){
            return i;
        }
       
    }
     return -1;
}
NODE* BUILTaTREE(int preorder[],int inorder[],int st,int ed ){
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

    node->left=BUILTaTREE(preorder,inorder,st,pos-1);
    node->right=BUILTaTREE(preorder,inorder,pos+1,ed);


    return node;

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

    NODE*rada=BUILTaTREE(preorder,inorder,0,4);
    INORDER(rada);
    return 0;
}