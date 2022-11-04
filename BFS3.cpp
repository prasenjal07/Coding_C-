#include<iostream>
#include<vector>
#include<queue>
const int N = 10e3+5;
using namespace std;
bool vis[N];
vector<int>v[N];


int main(){
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        vis[i]=false;
    }

    
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }

    queue<int>q;
    q.push(1);
    vis[1]=true;


    while(!q.empty()){
        int t = q.front();
        q.pop();
        cout<<t<<" ";

        vector<int>::iterator it;
        for(it=v[t].begin();it!=v[t].end();it++){
            if(vis[*it]==false){
                vis[*it]=true;
                q.push(*it);
            }
        }

    }

    return 0;
    
    }