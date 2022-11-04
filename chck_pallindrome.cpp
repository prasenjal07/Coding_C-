#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool status = 1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            status = 0;
            break;
        }
    }
    if(status == 1){
        cout<<"the given word is a palindrome";
    }
    else{
        cout<<"the given word is not a palindrome";
    }
}