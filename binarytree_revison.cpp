#include<iostream>
#include<queue>

using namespace std;
class NODE{
    public:
     int data;
     NODE *right;
     NODE *left;


     NODE(int val){
        data=val;
        right=NULL;
        left=NULL;
     }
 };

void LVL_order_traversal(NODE* &root){
//if(root==NULL){
    //return;
//}

queue<NODE*>s;
s.push(root);
s.push(NULL);

while(!s.empty()){
    NODE* node=s.front();
    s.pop();
   
    if(node!=NULL){
        cout<<node->data<<" ";
        if(node->left!=NULL){
            s.push(node->left);
        }
        if(node->right!=NULL){
            s.push(node->right);
        }
    }
    else if(!s.empty()){
        s.push(NULL);
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
    LVL_order_traversal(root);
    return 0;
}