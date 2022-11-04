#include<iostream>
using namespace std;

int find_peak_eleMENT(int arr[],int low,int high,int n){
    int mid=(high-low)/2+low;

    if((mid==0||arr[mid]>=arr[mid+1]) &&( mid==n-1||arr[mid]>=arr[mid-1])){
        return mid;
    }

    if(mid>0 && arr[mid-1]>arr[mid]){
        return find_peak_eleMENT(arr,low,mid-1,n);
    }
    else{
        return find_peak_eleMENT(arr,mid+1,high,n);
    }
}

int main(){
    int arr[]={0,1,5,6,4};
    int ans=find_peak_eleMENT(arr,0,4,5);
    cout<<ans;
    return 0;
}