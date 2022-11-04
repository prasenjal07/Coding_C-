#include<iostream>
#include<map>


using namespace std;

int main(){
    int n=9;
    
    int k=3;
    int arr[]={0,0,0,1,1,2,2,2,2};
    
    map<int ,int>mp;
    for(int i=0;i<n;i++){
        int present_size=mp.size();
        if(present_size==k && mp[arr[i]]==0){
            break;
        }

        mp[arr[i]]++;
    }

    map<int,int> :: iterator it;
    int maxx=0;
    for(it=mp.begin();it!=mp.end();it++){
        maxx=max(maxx,it->second);
    }
     for(it=mp.begin();it!=mp.end();it++){
        if(it->second == maxx){
            cout<<it->first;
        }
     }

     return 0;
}