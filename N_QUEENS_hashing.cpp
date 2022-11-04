#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

void solve(int colm,int n,vector<string>&temp,vector<vector<string>>&ans,vector<int>&left_row_chk,vector<int>&upper_diagonal_chk,vector<int>&lower_diagonal_chk){
if(colm==n){
    ans.push_back(temp);
    return;
}
for(int row=0;row<n;row++){
    if(left_row_chk[row]==0 && upper_diagonal_chk[(n-1)+(row-colm)]==0 && lower_diagonal_chk[row+colm]==0){
        temp[row][colm]='Q';
        left_row_chk[row]=1;
        upper_diagonal_chk[(n-1)+(row-colm)]=1;
        lower_diagonal_chk[row+colm]=1;
        solve(colm+1,n,temp,ans,left_row_chk,upper_diagonal_chk,lower_diagonal_chk);
        temp[row][colm]='.';
        left_row_chk[row]=0;
        upper_diagonal_chk[(n-1)+(row-colm)]=0;
        lower_diagonal_chk[row+colm]=0;
    }
}
}

vector<vector<string>>find_combination(int n){
    vector<vector<string>>ans;
    vector<string>temp(n);
    string s(n,'.');
    for(int i=0;i<n;i++){
     temp[i]=s;
    }
    vector<int>left_row_chk(n,0),upper_diagonal_chk(2*n-1,0),lower_diagonal_chk(2*n-1,0);
    solve(0,n,temp,ans,left_row_chk,upper_diagonal_chk,lower_diagonal_chk);
    return ans;
}

int main(){
    int n=8;
    vector<vector<string>>v;
    v=find_combination(n);
    for(auto i:v){
        for(auto j:i){
            cout<<j<<endl;
        }
        cout<<endl;
        cout<<endl;
    }

    return 0;
}