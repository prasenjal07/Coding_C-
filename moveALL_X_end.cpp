#include<iostream>
using namespace std;
string moveX(string s){
    if(s.length()==0){
        return"";
    }
    char pre=s[0];
    string reststring = moveX(s.substr(1));
    if(pre=='x'){
        return reststring+pre;
    }
    else
    return pre+reststring;

}
int main(){
   
    cout<<moveX("xxxpgstwxxxdkfxcnxjdsxscx");
    return 0;
}