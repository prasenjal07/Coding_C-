#include<iostream>
using namespace std;

int main(){
    string s="prasenjit is going to accenture";
    int n=s.length();
    for(int i=0;i<n/2;i++){
        swap(s[i],s[n-1-i]);
    }
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
    return 0;
}