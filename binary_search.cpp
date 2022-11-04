#include<iostream>
using namespace std;


class NODE {
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

NODE* binary_search(NODE* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
        return root;
    }
    if(key<root->data){
        return binary_search(root->left,key);
    }
    return binary_search(root->right,key);
}


int main(){
     NODE* root=new NODE(4);
     root->left=new NODE(2);
     root->right=new NODE(5);
     root->left->left=new NODE(1);
     root->left->right=new NODE(3);
     root->right->right=new NODE(7);
    
     
     if(binary_search(root,13)!=NULL){
        cout<<"present";
     }
     else{
        cout<<"absent";
     }

     return 0;
}