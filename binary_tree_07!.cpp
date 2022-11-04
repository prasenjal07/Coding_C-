#include<iostream>
#include<vector>

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

void print_NODES_atsubTREE(NODE* root,int k){
    if(root==NULL||k<0){
        return;
    }

    if(k==0){
        cout<<root->data<<" ";
    }
    print_NODES_atsubTREE(root->left,k-1);
    print_NODES_atsubTREE(root->right,k-1);
}


int print_NODES_at_k_distance(NODE* root,NODE* target,int k){
    if(root==NULL){
        return -1;
    }
    if(root==target){
        print_NODES_atsubTREE(root,k);
        return 0;
    }
    int Ld=print_NODES_at_k_distance(root->left,target,k);
    if(Ld!=-1){
        if(Ld+1==k){
           cout<<root->data<<" ";
        }
        else{
            print_NODES_atsubTREE(root->right,k-Ld-2);
        }

        return Ld+1;
    }
    int Rd=print_NODES_at_k_distance(root->right,target,k);
    if(Rd!=-1){
        if(Rd+1==k){
            cout<<root->data<<" ";

        }
        else{
            print_NODES_atsubTREE(root->left,k-Rd-2);
        }
        return Rd+1;
    }

    return -1;
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

   print_NODES_at_k_distance(root, root->left->right,3);

    return 0;
}