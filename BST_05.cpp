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


NODE* BST_sortedARR(int arr[],int st,int ed){
    if(st>ed){
        return NULL;
    }
    int mid=(st+ed)/2;
    NODE* root=new NODE(arr[mid]);

    root->left=BST_sortedARR(arr,st,mid-1);
    root->right=BST_sortedARR(arr,mid+1,ed);

    return root;
}
bool check_validBST(NODE* root,NODE* min,NODE* max){
      if(root==NULL){
        return true;
      }
      if(min!=NULL && root->data <= min->data){
           return false;
      }
      if(max!=NULL && root->data >= max->data){
        return false;
      }      

      bool check_left=check_validBST(root->left,min,root);
      bool check_right=check_validBST(root->right,root,max);

      return (check_left && check_right);
}

void inorder(NODE* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    NODE* rada=BST_sortedARR(arr,0,13);
    inorder(rada);
    if(check_validBST(rada,NULL,NULL)){
        cout<<"valid BST";
    }
    else{
        cout<<"invalid BST";
    }

    return 0;
}