#include<iostream>
using namespace std;

class  NODE{
        int data;
        NODE* right;
        NODE* left;

        NODE(int val){
            data=val;
            right=NULL;
            left=NULL;
        }
};
void distancefromTARGET(NODE* node,int k){
    if(node==NULL||k<0){
        return;
    }
    if(k==0){
        cout<<node->data<<" ";
        return;
    }
    distancefromTARGET(node->left,k-1);
    distancefromTARGET(node->right,k-1);

}

int printNODESat_kdistance(NODE* root,NODE* target,int k){
    if(root==NULL){
        return -1;
    }
    if(root==target){
        distancefromTARGET(root,k);
        return 0;
    }

    int DL=printNODESat_kdistance(root->left,target,k);
      if(DL!=-1){
        if(DL+1==k){
            cout<<root->data<<" ";
        }
        else{
            distancefromTARGET(root->right,k-DL-2);
        }

        return DL+1;
      }

      int DR=printNODESat_kdistance(root->right,target,k);
      if(DR!=-1){
        if(DR+1==k){
            cout<<root->data<<" ";
        }
        else{
            distancefromTARGET(root->left,k-DR-2);
        }

        return DR+1;
      }


      return -1;
}

int main(){

}