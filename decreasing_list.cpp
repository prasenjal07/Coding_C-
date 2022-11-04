#include<iostream>
using namespace std;
int dec(int n){
    if(n==0){
        return 0;
    }
    
    int rada = dec(n-1);
    cout<<n<<endl;
    return rada;

    
}
    

int main(){
    int n;
    cin>>n;
    cout<<dec(n);
    return 0;
}