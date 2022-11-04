#include<iostream>
#include<vector>
const int N = 10e3+3;

 using namespace std;
vector<int>v[N];
bool  vis[N];
 
 void DFS(int k){
    cout<<k<<endl;//pre order--------->>>>>>>>>>>shift this line below recursive function to get postorder
    vis[k]=true;

    vector<int>::iterator it;
    for(it=v[k].begin();it!=v[k].end();it++){
        if(vis[*it]==false){
            vis[*it]=true;
            DFS(*it);
        }
    }
 }
 
 int main(){

    for(int i=0;i<N;i++){
        vis[i]=false;
    }
      int m,n;
      cin>>m>>n;
      for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
      }

      DFS(1);

      return 0;
 }