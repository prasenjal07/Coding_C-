#include<iostream>
using namespace std;

void subseq(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char pre=s[0];
    int code=pre;
    string reststring = s.substr(1);
    subseq(reststring,ans);
    subseq(reststring,ans+pre);
    subseq(reststring,ans+to_string(code));
    
}
int main(){
    subseq("ABC","");
    return 0;
}