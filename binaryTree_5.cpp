#include<iostream>
#include<vector>

using namespace std;
class NODE{
    public:
    int data;
    NODE *right,*left;

    NODE(int val){
        data=val;
        right=NULL;
        left=NULL;
    }
};

bool check_preence(NODE* root,int n1){
    //if(root==NULL){
      //  return false;
    //}
    bool  ans=false;
    if(root==NULL){
        return false;
    }
    if(root->data==n1){
        return true;
    }
    bool ans1=check_preence(root->left,n1);
    bool ans2=check_preence(root->right,n1);
    if(ans1||ans2){
        return true;
    }
}
bool get_path(NODE* root,int n,vector<int>&p){
    if(root==NULL){
        return false;
    }
    p.push_back(root->data);
    if(root->data==n){
        return true;
    }
    
    if(get_path(root->left,n,p)){
        return true;
    }
    if(get_path(root->right,n,p)){
        return true;
    }
    p.pop_back();
    return false;

}

int LCA(NODE *root,int n1,int n2){
    if(root==NULL){
        return 0;
    }
    vector<int>p1,p2;
    if(!get_path(root->left,n1,p1)||!get_path(root->right,n2,p2)){
      return -1;
    }

    int i;

   for(i=0;i<min(p1.size(),p2.size());i++){
    if(p1[i]!=p2[i]){
        break;
    }
   }
   return p1[i-1];

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
    

    //cout<<check_preence(root,16)<<endl;
    cout<<LCA(root,4,15)<<endl;
    return 0;

}