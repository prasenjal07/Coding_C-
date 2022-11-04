#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool customSORT(vector<int>&a,vector<int>&b){
    return a[1]<b[1];
}

int main(){
    vector<vector<int>>v;
    int n;
    cin>>n;
    
    for(int i=0;i<n;i++){
        int st;
        int ed;
        cin>>st>>ed;
        v.push_back({st,ed});
    }

    sort(v.begin(),v.end(),customSORT);

    int count=1;
    int end=v[0][1];

    for(int i=0;i<n;i++){
        if(v[i][0]>=end){
            count++;
            end=v[i][1];
        }
    }

    cout<<count;

    return 0;
}