#include<iostream>
using namespace std;

void  DNF_sort(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[high],arr[mid]);
            high--;
        }
    }

    return;
}

int main(){
    int arr[]={0,0,2,1,1,1,0,2,0,2,1,0,1,1,2,1,2,2,2,0};//20 elements
    DNF_sort(arr,20);
    for(auto i:arr){
        cout<<i<<" ";
    }

    return 0;
}