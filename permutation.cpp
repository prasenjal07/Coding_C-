#include<iostream>
using namespace std;

void permutations(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<s.length();i++){
        char pre=s[i];
        string reststring=s.substr(0,i)+s.substr(i+1);
        permutations(reststring,pre+ans);
    }
}
int main(){
    permutations("ABC","");
    return 0;
}