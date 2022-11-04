#include<iostream>
#include<vector>

using namespace std;

class NODE{
    int data;
    NODE *right,*left;

    NODE(int val){
        data=val;
        right=NULL;
        left=NULL;
    }
};

NODE* findlast(NODE* root){
    if(root->right==NULL){
        return root;
    }
    NODE* techyapaile=findlast(root->right);

    return techyapaile;
}

NODE* helper(NODE* node){
    if(root->left==NULL){
        return root->right;
    }
    if(root->right==NULL){
        return root->left;
    }

    NODE* rightchild=root->right;
    NODE* lastright=findlast(root);
    lastright->right=rightchild;



    return root->left;
}



NODE* deleteNODE(NODE* root,int key){
    if(root==NULL){
        return NULL;
    }
    if(root->data==key){
       return helper(root); 
    }
    NODE* dummy=root;
    while(root!=NULL){
        if(root->data>key){
            if(root->left!=NULL && root->left->data==key){
                return helper(root->left);
            }
            else{
                root=root->left;
            }
        }
        else{
            if(root->right!=NULL && root->right->data==key){
                return helper(root->right);
            }
            else{
                root=root->right;
            }
        }
    }

    return dummy;

}


int main(){

}