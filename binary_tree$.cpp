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
void SUM_AT_Kth_LVL(NODE* root,int k){
    if(root==NULL){
        return;
    }
    queue<NODE*>q1;
    q1.push(root);
    int count=1;
    int sum=0;
    while(!q1.empty()){
        auto n=q1.size();
        for(int i=0;i<n;i++){
        NODE* temp=q1.front();
        q1.pop();
        if(temp!=NULL){
        if(count==k){
            sum+=temp->data;
        }
        if(temp->left!=NULL){
            q1.push(temp->left);
        }
        if(temp->right!=NULL){
            q1.push(temp->right);
        }
        }
        }
        count++;
    
    }
    cout<<sum<<endl;
}
int MAXHEIGHT(NODE *root){
    if(root==NULL){
        return 0;
    }
    int Hl=MAXHEIGHT(root->left);
    int Hr=MAXHEIGHT(root->right);

    return (max(Hl,Hr)+1);

}
int calc_diameter(NODE *root){
    if(root==NULL){
        return 0;
    }
    int Hl=MAXHEIGHT(root->left);
    int Hr=MAXHEIGHT(root->right);
    int curr=Hl+Hr+1;
    int leftMAX=calc_diameter(root->left);
    int rightMAX=calc_diameter(root->right);

    return max(max(rightMAX,leftMAX),curr);
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

    cout<<MAXHEIGHT(root)<<endl;

    SUM_AT_Kth_LVL(root,3);

    cout<<calc_diameter(root)<<endl;

    return 0;
}