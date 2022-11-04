#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
    cin.ignore();
    int currentlenght=0,maxlenght=0;
    for(int i=0;i<n;i++){
        while(arr[i]!=' '|| arr[i]=='\0'){
           currentlenght++;
        }
        maxlenght=max(maxlenght,currentlenght);
        currentlenght = 0;
    }
    cout<<maxlenght;
    return 0;
}
