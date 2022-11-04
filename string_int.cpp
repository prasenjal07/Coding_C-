#include<iostream>
#include<string.h>
using namespace std;


bool chk__pallindrome(int a){
    int k=a;
    int rem=0;
    while(k){
        int l=k%10;
        rem=rem*10+l;
        k=k/10;
    }

    if(rem==a){
        return true;
    }
    else{
        return false;
    }
}

bool chk_pallindrome(int a){
    string s=to_string(a);
    int n=s.length();
    string s1=s;
    
    //const char *str_inp1=s;
    
    for(int i=0;i<n/2;i++){
        swap(s[i],s[n-1-i]);
    }

    /*if(strcmp(s,s1)){
        return true;
    }
     return false;*/

    if(s==s1){
        return true;
    }
    return false;
}
int main(){
    int a = 123321;
    if(chk__pallindrome(a)){
        cout<<"its pallindrome"<<endl;
    }
    else{
        cout<<"its NOT"<<endl;
    }

    return 0;
}