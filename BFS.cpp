#include<iostream>
#include<vector>
#include<queue>
const int N=10e2+3;
using namespace std;

int main(){
bool vis[N];
vector<int>v[N];
  for(int i=0;i<N;i++){
    vis[i]=false;
  }

  int n,m;
  cin>>n>>m;
  for(int i=0;i<n;i++){
    int x,y;
    cin>>x>>y;
    v[x].push_back(y);
    v[y].push_back(x);
  }

  queue<int>q;
  q.push(1);
  vis[1]=true;
  while(!q.empty()){
    int a=q.front();
    q.pop();
    cout<<a<<endl;
    vector<int>::iterator it;

    for(it=v[a].begin();it!=v[a].end();it++){
       if(vis[*it]==false){
        vis[*it]=true;
        q.push(*it);
       }
    }
    
  }

  return 0;
}