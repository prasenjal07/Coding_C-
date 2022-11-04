#include<iostream>
using namespace std;
void PrimeSet(int n){
    int PRime[100]={0};
    for(int i=2;i<n;i++){
        if(PRime[i]==0){
        for(int j=i*i;j<n;j+=i){
            PRime[j]=1;
        }
        }

    }
    for(int i=0;i<n;i++){
        if(PRime[i]==0){
            cout<<i<<endl;
        }
    }
}
int main()
{
    PrimeSet(100);
    return 0;
}