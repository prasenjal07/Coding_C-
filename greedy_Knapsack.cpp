#include<iostream>
#include<vector>
#include<algorithm>
//#include<pair>
 using namespace std;

 bool  customSORT(pair<int,int>&p1,pair<int,int>&p2){
    double v1=(double)p1.first/p1.second;
    double v2=(double)p2.first/p2.second;

    return v1>v2;
 }

 int main(){
    int n;
    cin>>n;
    int W;
    cin>>W;
    pair<int,int>p;
    vector<pair<int,int>>v;

    for(int i=0;i<n;i++){
        int wt,value;
        cin>>value>>wt;
        p.first=value;
        p.second=wt;
        v.push_back(p);
    }

    sort(v.begin(),v.end(),customSORT);
     int ans=0;
    for(int i=0;i<n;i++){
     if(v[i].second<W){
     ans+=v[i].first;
     W-=v[i].second;
     continue;
     }
     double v3=(double) v[i].first/v[i].second;
     int k=v3*W;
     ans=ans+k;
     W=0;
     break;

     
    }

    cout<<ans;

    return 0;
 }