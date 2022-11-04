#include<iostream>
#include<unordered_map>

using namespace std;


int main(){
    int arr[]={1,1,2,2,2,2,2,2,4,4,4,3,3,7,7,7};
    unordered_map<int,int>mp;

    for(int i=0;i<16;i++){
        mp[arr[i]]++;
     }

     unordered_map<int,int>::iterator it;

     for(it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
     }

    cout<<mp.size()<<endl;

    mp.insert({6,5});
    mp.erase(6);//put in key to delete key value pair

    for(it=mp.begin();it!=mp.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
     }
    //cout<<mp.lower_bound(4)->second<<" ->lower bound of 4"<<endl;
    //cout<<mp.upper_bound(4)->second<<" ->upper bouns of 4"<<endl;
    

   return 0;
}