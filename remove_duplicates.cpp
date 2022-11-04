#include<iostream>
using namespace std;
string removeDUP(string s){
    if(s.length()==0){
        return "";
    }
    char prev=s[0];
    string reststring = removeDUP(s.substr(1));
    if(reststring[0]==prev){
        return reststring;
    }
    return prev+reststring;
   
}
int main(){
    string s;
    cin>>s;
    cout<<removeDUP(s);
}