#include<iostream>
//#include<vetor>

using namespace std;
int fibb(int n){
    if(n<=1){
        return n;
    }

    auto first=fibb(n-1);
    auto second=fibb(n-2);
    return first+second; 
}

int main(){
    int n;
    cin>>n;
    cout<<fibb(n);
}