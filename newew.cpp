#include<iostream>

using namespace std;

int maxxsecond(int arr[],int n){
   int maxx1=arr[0];
   int maxx2=0;
   for(int i=0;i<n;i++){
    if(arr[i]>maxx1){
        if(maxx1==maxx2){
            break;
        }
        maxx2=maxx1;
        maxx1=arr[i];
        
    }
    
   }
   return maxx2;
}

int main(){

    int arr[]={1,2,3,4,5,6,7,8,9,9,9};
    cout<<maxxsecond(arr,9);
    return 0;
}