#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<vector<int>>v;
    int n;
    int take;
    cin>>n;
    for(int i=0;i<n;i++){
        int start,end;
        cin>>start>>end;
        v.push_back({start,end});
    }

    sort(v.begin(),v.end(),[&](vector<int>&a,vector<int>&b){
      return a[1]<b[1];
    });

    take=1;
    int end=v[0][1];
    for(int i=0;i<n;i++){
       if(v[i][0]>=end){
        end=v[i][1];
        take++;
       }
    }

    cout<<take;
}