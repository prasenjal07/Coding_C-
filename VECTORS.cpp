#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector <int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(3);
    v.push_back(9);
    v.push_back(8);

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    //iteration by loop method//
    vector<int>::iterator it; 
    
    for(it=v.begin();it!=v.end();it++){
        cout<<*it<<" ";
    }
    //iteration using iterator//
    cout<<endl;
    for(auto element : v){
        cout<<element<<" ";
    }
    //traversing using auto as element is traversing parameter//
    cout<<endl;
    

    vector<int> v2 (3,50);

    swap(v,v2);
    sort(v.begin(),v.end());
    cout<<"displaying v vector";
    for(int i=0;i<v.size();i++){
        
        cout<<v[i]<<" ";

    }
    cout<<endl;
    cout<<"displaying v2 vector";
    for(int i=0;i<v2.size();i++){
         cout<<v2[i]<<" ";
    }
    
        return 0;
}