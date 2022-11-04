#include<iostream>
using namespace std;

string KeyPad[]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return ;

    }
    char pre=s[0];
    string code=KeyPad[pre-'0'];
    string reststring=s.substr(1);
    for(int i=0;i<code.length();i++){
        keypad(reststring,ans+code[i]);
    }
    

    }
    int main(){
        keypad("234","");
        return 0;
    }