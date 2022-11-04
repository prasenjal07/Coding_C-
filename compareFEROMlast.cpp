#include<iostream>
using namespace std;

int CompareFROMlast(int arr[],int n,int i,int key){
    int rada = CompareFROMlast(arr,n,i+1,key);
    if(rada!=-1){
        return rada;
    }
    if(arr[i]==key){
        return i;
    }
    return -1;
}
int main(){
    int arr[]={1,2,3,4,4,3,2,3,4,4,56,76,5,6,5,6};
    cout<<CompareFROMlast(arr,16,0,4);
    return 0;
}