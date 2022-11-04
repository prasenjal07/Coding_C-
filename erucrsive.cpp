#include<iostream>
using namespace std;
void reverse(string s){
    if(s.length()==0){
        return;
    }
    string reststring = s.substr(1);
    reverse(reststring);
    cout<<s[0];
}
int main(){
    string s;
    cin>>s;
    reverse(s);
    return 0;
}