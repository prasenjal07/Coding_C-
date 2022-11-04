#include<iostream>
using namespace std;
int Comparefromfirst(int arr[],int n,int i,int key){
    if(i==n){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return Comparefromfirst(arr,n,i+1,key);


}
int main(){
    int arr[]={1,2,3,4,4,4,3,3,6,7,54,32};
    cout<<Comparefromfirst(arr,12,0,4);
    return 0;
}