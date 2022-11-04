#include<iostream>
using namespace std;
int Power(int n ,int p){
    if(p==0){
        return 1;
    }
    int previousPower = n*Power(n,p-1);
    return previousPower;
}
int main(){
    int n,p;
    cin>>n>>p;
    cout<<Power(n,p)<<endl;
    return 0;
    }