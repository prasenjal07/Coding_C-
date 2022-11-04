#include<iostream>
#include<vector>
#include<queue>

using namespace std;


int main(){
     int n,m;
     cin>>n>>m;
     int count=0;
     vector<int>v1(n,0);
     vector<vector<int>>v2(n,v1);
     vector<int>indegree(n,0);

     for(int i=0;i<m;i++){
        int x,y;
        //where x-->y
        cin>>x>>y;
        v2[x].push_back(y);
        indegree[y]++;
     }


     queue<int>pq;
     for(int i=0;i<n;i++ ){
        if(indegree[i]==0){
            pq.push(i);
        }
     }

     while(!pq.empty()){
        count++;
        int x=pq.front();
        pq.pop();
        cout<<x<<" ";
        for(auto i:v2[x]){
            v2[i]--;
            if(indegree[i]==0){
                pq.push(i);
            }
        }
     }

     return 0;
}