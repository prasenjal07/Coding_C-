#include<iostream>
using namespace std;

int max_subarray(int arr[],int n,int k,int x){
    int sum=0;
    int ans=0;
    for(int i=0;i<k;i++){
    sum=sum+arr[i];
    }
    if(sum<=x){
        ans=sum;
    }
    for(int i=0;i<n-k;i++){
        sum=sum-arr[i]+arr[k+i];
        if(sum<=x){
            ans=max(sum,ans);
        }
    }

    return ans;
}

int main(){
    int arr[]={100,200,300,400,500,600,700};
    cout<<max_subarray(arr,7,3,1200);
    return 0;
}