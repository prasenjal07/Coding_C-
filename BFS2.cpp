#include<iostream>
#include<vector>
#include<queue>
const int N=10e3+2;
using namespace std;

int main(){
    bool vis[N];
    vector<int>p[N];
    for(int i=0;i<N;i++){
        vis[i]=false;
    }

    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        p[x].push_back(y);
        p[y].push_back(x);

    }

    cout<<"BFS traversal is as follows:"<<endl;

    queue<int>q;
    q.push(1);
    vis[1]=true;

    while(!q.empty()){
        int a=q.front();
        q.pop();
        cout<<a<<" ";

        vector<int>::iterator it;
        for(it=p[a].begin();it!=p[a].end();it++){
            if(vis[*it]==false){
            q.push(*it);
            vis[*it]=true;
            }

        }
    }

    return 0;

}