#include<iostream>
#include<queue>
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

int max_height(NODE* root){
    if(root==NULL){
       return 1;
    }
    int lh=max_height(root->left);
    int rh=max_height(root->right);

    return (max(lh,rh)+1);

}

void SUM_REPLACEMENT(NODE* root){
    if(root==NULL){
        return;
    }

    SUM_REPLACEMENT(root->left);
    SUM_REPLACEMENT(root->right);

    if(root->left!=NULL){
        root->data+=root->left->data;
    }
    if(root->right!=NULL){
        root->data+=root->right->data;
    }
}
int count_NODE(NODE* root){
    if(root==NULL){
        return 0;
    }
    static int count=0;
    int lh=count_NODE(root->left);
    int rh=count_NODE(root->right);

    return (lh+rh+1);
}

void preorder(NODE* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

void RIGHT_VIEW(NODE* root){
    if(root==NULL){
        return;
    }
    queue<NODE*>q1;
    q1.push(root);
    while(!q1.empty()){
        
        auto n=q1.size();
    
        for(int i=0;i<n;i++){
              auto temp=q1.front();
              q1.pop();
              if(i==n-1){
                cout<<temp->data<<" ";
              }
              if(temp->left!=NULL){
                q1.push(temp->left);
              }
              if(temp->right!=NULL){
                q1.push(temp->right);
              }
        }
    }
}

void right_VIEW(NODE* root){
     if(root==NULL){
      return;
    }
    queue<NODE*>q1;
    q1.push(root);
    q1.push(NULL);
    while(!q1.empty()){
       auto temp=q1.front();
       q1.pop();
       if(temp!=NULL){
        if(temp->left!=NULL){
            q1.push(temp->left);
        }
        if(temp->right!=NULL){
            q1.push(temp->right);
        }
        if(q1.front()==NULL){
            cout<<temp->data<<" ";
        }
        } 
        else if(!q1.empty()){
            q1.push(NULL);
        }
    }

}

void left_VIEW(NODE*root){
    if(root==NULL){
       return;
    }
    queue<NODE*>q1;
    q1.push(root);
    q1.push(NULL);
    cout<<root->data<<" ";
    while(!q1.empty()){
        auto temp1=q1.front();
        q1.pop();
        if(temp1!=NULL){
            if(temp1->left!=NULL){
                q1.push(temp1->left);
            }
            if(temp1->right!=NULL){
                q1.push(temp1->right);
            }

        }
        else if(!q1.empty()){
            cout<<q1.front()->data<<" ";
            q1.push(NULL);
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

    cout<<max_height(root)<<" ";
    cout<<endl;
    //SUM_REPLACEMENT(root);
    preorder(root);
    cout<<endl;
    cout<<count_NODE(root);
    cout<<endl;
    cout<<root->data<<endl;
    //RIGHT_VIEW(root);
    //right_VIEW(root);
    left_VIEW(root);
    return 0;
}