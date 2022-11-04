#include<iostream>
using namespace std;
void XXXX(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i]^arr[j]!=0){
                cout<<arr[j];
            }
        }
    }
}
int main(){
    int arr[]={1,2,3,4,5,3,2,1};
    XXXX(arr,8);
    
    return 0;
    }