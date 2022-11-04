#include<iostream>
using namespace std;
void subseq(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
    }
    string reststring=s.substr(1);
    char pre=s[0];
    subseq(reststring,ans);
    cout<<endl;
    subseq(reststring,ans+pre);
    cout<<endl;
}
int main(){
    subseq("ABCDE","");
    cout<<endl;
   
    return 0;
}