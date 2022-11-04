#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

bool chk_pallindrome(string s,int start,int end){
    while(start<end){
        if(s[start]!=s[end])return false;
        start++;
        end--;
    }
    return true;
}

void find_strings(int idx,string s,vector<string>&temp,vector<vector<string>>&res){
    if(idx==s.length()){
        res.push_back(temp);
        return;
    }
    for(int i=idx;i<s.length();i++){
        if(chk_pallindrome(s,idx,i)){
            temp.push_back(s.substr(idx,i-idx+1));
            find_strings(idx+1,s,temp,res);
            temp.pop_back();
        }
    }
}

vector<vector<string>>partition(string s){
    vector<vector<string>>res;
    vector<string>temp;

    find_strings(0,s,temp,res);
    return  res;
}

int main(){
    string s="aabb";
    int n=s.length();
    vector<vector<string>>v;
    v=partition(s);
    for(auto i:v){
        for(auto j:i){
            cout<<j;
        }
        cout<<endl;
    }

    return 0;
}