#include<iostream>
using namespace std;

int size_of_subarray(int arr[],int n,int M){
    int sum=0;
    int min_lenght=n+1;
    int st=0;
    int end=0;
    while(end<n){
        while(sum<=M && end<n){
            sum+=arr[end++];
        }
        while(sum>M && st<n){
             if(min_lenght>(end-st)){
                min_lenght=(end-st);
            }
            sum-=arr[st++];
           
        }
    }
   
    return min_lenght;
}

int main(){
    int arr[]={1,4,45,6,10,19};
    int ans=size_of_subarray(arr,6,51);
    cout<<ans;
    return 0;
}
