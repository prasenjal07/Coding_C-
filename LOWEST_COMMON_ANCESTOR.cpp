#include<iostream>
#include<vector>

using namespace std;

class NODE{
     int data;
     NODE* right;
     NODE* left;

     NODE(int val){
        data=val;
        right=NULL;
        left=NULL;
     }
};

bool getPath(NODE* root,int n,vector<int> &path){
    path.push_back(root->data);
    if(root->data==n){
        return true;
    }

    if(getPath(root->right,n,path)||getPath(root->left,n,path)){
        return true
    }

    path.pop_back();
    return false;
}

int LCA(NODE* root,int n1,int n2){
    vector<int>path1,path2;

    if(!getPath(root,n1,path1) || !getPath(root,n2,path2)){
        return -1;
    }

    int pc;
    for(pc=0;pc<path1.size()&&path2.size();i++){
        if(path1[pc]!=path2[pc]){
            break;
        }

    }
    return path1[pc-1];

}