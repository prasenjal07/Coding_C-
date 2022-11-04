#include<iostream>
#include<vector>
//const  int  N = 1e5+7;
using namespace std;

int main(){
int n,m;
vector<int>p(n+1,0);
//vector<int>p2[N];
vector<vector<int>>p1(n+1,p);
cin>>n>>m;
for(int i=0;i<n;i++){
int x,y;
cin>>x>>y;
p1[x][y]=1;
p1[y][x]=1;
}

cout<<"output of matrix"<<endl;

for(int i=1;i<n+1;i++){
    for(int j=1;j<n+1;j++){
        cout<<p1[i][j];
    }
    cout<<endl;
}

cout<<"output of matrix list"<<endl;

/*for(int i=0;i<m+1;i++){
int x,y;
cin>>x>>y;
p2[x].push_back(y);
p2[y].push_back(x);

}

for(int i=0;i<m+1;i++){
    cout<<i<<"->";
    vector<int>::iterator it;
    for(it=p2[i].begin();it!=p2[i].end();it++){
        cout<<*it<<" ";
    }
}*/


return 0;
}