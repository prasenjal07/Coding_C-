#include<iostream>
#include<vector>

using namespace std;
bool checkPALINDROME(int i,int n,string s){
    if(i>=n/2){
        return true;

    }

    if(s[i]!=s[n-1-i]){
        return false;
    }
    return checkPALINDROME(i+1,n,s);
}
int main(){
    string s= "maadam";
    int n=s.length();
    cout<<checkPALINDROME(0,n,s);
    return 0;
}