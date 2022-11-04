#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    string s="tuya maai cha chivda";
    for(auto i:s){
     cout<<i;
    }
    cout<<endl;
    for(int i=0;i<s.length()/2;i++){
        swap(s[i],s[s.length()-1-i]);
    }
    for(auto i:s){
        cout<<i;
    }
    return 0;
}