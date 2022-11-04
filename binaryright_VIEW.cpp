#include<iostream>
#include<queue>
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

void RIGHTVIEW_BINARYTREE(NODE* root){
    if(root==NULL){
        return;
    }
    queue<NODE*>q1;
    q1.push(root);
    
    while(!q1.empty()){
       
        int n=q1.size();
       
        for(int i=0;i<n;i++){
            
            NODE* node=q1.front();
            q1.pop();
            
            if(i==n-1){
                cout<<node->data<<" ";
            }
            if(node->left!=NULL){
                q1.push(node->left);
            }
            if(node->right!=NULL){
                q1.push(node->right);
            }
            
        }
    }
}
void LEFTVIEW_BINARYTREE(NODE* root){
    if(root==NULL){
        return;
    }
    queue<NODE*>q2;
    q2.push(root);

    while(!q2.empty()){
        int n=q2.size();
        for(int i=0;i<n;i++){
            NODE* node = q2.front();
            q2.pop();
            if(i==0){
                cout<<node->data<<" ";
            }
            if(node->left!=NULL){
                q2.push(node->left);
            }
            if(node->right!=NULL){
                q2.push(node->right);
            }
        }
    }
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

    RIGHTVIEW_BINARYTREE(root);
    cout<<endl;
    LEFTVIEW_BINARYTREE(root);

    return 0;
}