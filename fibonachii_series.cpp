#include<iostream>
using namespace std;

void print_fibb(int n){
    int a1=0;
    int a2=1;
    int fiBB=1;
    int i=3;
    cout<<"0"<<" ";
    cout<<"1"<<" ";
    cout<<"1"<<" ";
    while(i!=n){
        a1=a2;
        a2=fiBB;
        fiBB=a1+a2;
        i++;
        cout<<fiBB<<" ";
    }
}

int fibb(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    int prev=fibb(n-1)+fibb(n-2);

    return prev;
}
int main(){
    int n;
    cin>>n;

    print_fibb(n);
    cout<<fibb(n)<<endl;

    return 0;
}