#include<iostream>
using namespace std;

bool Sorted(int arr[],int n){
    if(n==1){
        return true;
    }
    bool restarray = Sorted(arr+1,n-1);
    if(arr[0]<arr[1]&& restarray){
        return true;
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7,-18};
    bool rada=Sorted(arr,8);
    cout<<rada;
    return 0;
}