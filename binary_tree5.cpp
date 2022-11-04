#include<iostream>
#include<vector>

using namespace std;
class NODE{
    public:
    int data;
    NODE *left,*right;

    NODE(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

NODE* LCA(NODE* root,int n1,int n2){
    if(root==NULL){
        return NULL;

    }

    if(root->data==n1||root->data==n2){
        return root;
    }
    NODE* L_rada=LCA(root->left,n1,n2);
    NODE* R_rada=LCA(root->right,n1,n2);

    if(L_rada==NULL&&R_rada==NULL){
        return NULL;
    }
    if(L_rada!=NULL&&R_rada!=NULL){
        return root;
    }
    if(L_rada!=NULL){
        return LCA(root->left,n1,n2);
    }
    if(R_rada!=NULL){
        return LCA(root->right,n1,n2);
    }
}



int distance(NODE* k,int n,int distancee){
   
   if(k==NULL){
    return -1; 
   }
   if(k->data==n){
    return distancee;
   }

   int Ld=distance(k->left,n,distancee+1);
   
   if(Ld!=-1){
    return Ld;
   }
   
   return distance(k->right,n,distancee+1);
   

}

int distanceBT_NODES(NODE* root,int n1,int n2){
    NODE* L_radaian=LCA(root,n1,n2);
    int dist1=distance(L_radaian,n1,0);
    int dist2=distance(L_radaian,n2,0);


    return dist1+dist2;
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
    cout<<distanceBT_NODES(root,15,8)<<endl;


    return 0;
}