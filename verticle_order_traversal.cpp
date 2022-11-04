#include<iostream>
#include<map>
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

void getTRAVESED(NODE* root,int hDIS,map<int,vector<int>>&mp){
    if(root==NULL){
        return;
    }

    mp[hDIS].push_back(root->data);
    getTRAVESED(root->left,hDIS-1,mp);
    getTRAVESED(root->right,hDIS+1,mp);

}

int main(){
    NODE *root = new NODE(10);
    root->left=new NODE(7);
    root->right=new NODE(7);
    root->left->left=new NODE(3);
    root->left->right=new NODE(11);
    root->right->left=new NODE(14);
    root->right->right=new NODE(6);

    map<int,vector<int>>mp;
    int hDIS=0;

    getTRAVESED(root,hDIS,mp);

    map<int,vector<int>>:: iterator it;
    for(it=mp.begin();it!=mp.end();it++){
        for(int i=0;i<it->second.size();i++){
            cout<<(it->second)[i]<<" ";
        }
        cout<<endl;
    }


  return 0;
}