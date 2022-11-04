#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

bool ISsafe(int row,int col,vector<string>temp,int n){
    for(int i=0;i<n;i++){
    if(temp[row][i]=='Q'){
        return false;
    }
    if(temp[i][col]=='Q'){
        return false;
    }
    }
    //int i=row,j=col;
    //while(i!=n ||j!=n){
    //if(temp[i][j]=='Q')return false;
    // i++;
    // j++;
    //}
    int i=row,j=col;
    while(i>=0||j>=0){
        if(temp[i][j]=='Q')return false;
        i--;
        j--;
    }
    i=row,j=col;
    while(row<=0 || col<n){
        if(temp[i][j]=='Q')return false;
        i--;
        j++;
    }
    
    return true;

}


void solve(int col,vector<string>&temp,vector<vector<string>>&ans,int n){
    if(col==n){
        ans.push_back(temp);
        return;
    }

    for(int row=0;row<n;row++){
        if(ISsafe(row,col,temp,n)){
            temp[row][col]='Q';
            solve(col+1,temp,ans,n);
            temp[row][col]='.';
        }
    }
}

vector<vector<string>>get_positions(int n){
    vector<vector<string>>ans;
    vector<string>temp;
    string s(n,'.');
    for(int i=0;i<n;i++){
        temp[i]=s;
    }
    solve(0,temp,ans,n);
    return ans;
}

int main(){
    int n=5;
    cout<<"finding a way to put 5 queens on 5*5 chess board without getting attacked"<<endl;
    vector<vector<string>>v;
    v=get_positions(n);
    for(auto i:v){
        for(auto j:i){
            cout<<j<<endl;
        }

        cout<<endl<<endl;
    }

    return 0;
}