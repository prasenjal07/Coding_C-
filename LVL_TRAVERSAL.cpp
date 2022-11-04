#include<iostream>
#include<queue>

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


void LVLTRAVERSAL(NODE* &root){
    queue<NODE*>q1;
    q1.push(root);
    q1.push(NULL);

    while(!q1.empty())
    {
        NODE* node=q1.front();
        q1.pop();
            if(node!=NULL){
                cout<<node->data<<" ";
                if(node->left!=NULL){
                    q1.push(node->left);
                }

                if(node->right!=NULL){
                    q1.push(node->right);
                }
            }
            else if(!q1.empty()){
                q1.push(NULL);
            }
    }
}
int countNODES(NODE* root){

    if(root==NULL){
        return 0;
    }
    return countNODES(root->left)+countNODES(root->right)+1;

}


int sumNODES(NODE* root){

    if(root==NULL){
        return 0;
    }
    return sumNODES(root->left)+sumNODES(root->right)+root->data;
}
int height_TREE(NODE* root){

    if(root==NULL){
        return 0;
    }
    int heightLEFT=height_TREE(root->left);
    int heightRIGHT=height_TREE(root->right);
    int ans=max(heightLEFT,heightRIGHT);
    return ans+1;

}

int maxDIAMETER(NODE* &root){

    if(root==NULL){
        return 0;
    }
    int maxleft=maxDIAMETER(root->left);
    int maxright=maxDIAMETER(root->right);
    int maxNODE=height_TREE(root->left)+height_TREE(root->right)+1;


    return max(maxNODE,max(maxleft,maxright));
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
    LVLTRAVERSAL(root);
    cout<<endl;
    cout<<countNODES(root);
    cout<<endl;
    cout<<sumNODES(root);
    cout<<endl;
    cout<<height_TREE(root);
    cout<<endl;
    cout<<maxDIAMETER(root);

     return 0;
}