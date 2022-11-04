#include<iostream>
#include<vector>
using namespace std;

bool MYcompaare(pair<int , int>p1,pair<int , int>p2){
     return p1.first<p2.first;
}

int main(){
    int arr[]={1,2,9,7,21,23,16,13,12};
    vector<pair<int , int>>v;
    for(int i=0;i<(sizeof(arr)/sizeof(arr[0]));i++){
        pair<int , int> p;
        p.first=arr[i];
        p.second=i;
        v.push_back(p);

        

    }
    sort(v.begin(),v.end(),MYcompaare);
    for(int i=0;i<v.size();i++){
        arr[v[i].second]=i;
    }
    return 0;
}

