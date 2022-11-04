#include<iostream>

using namespace std;


void bubble_sort(int arr[],int n){
    int count = 1;
    while(count<=n){
        for(int i=0;i<(n-count);i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }

        count ++;
    }
}

void selection_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }

    return;
}

void insertion_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int j=i-1;
        int curr=arr[i];

        while(arr[j]>curr && j>=0){
            arr[j+1]=arr[j];
            j--;
        }

        arr[j+1]=curr;
    }

    return;
}
int main(){

    int arr[]={5,6,3,2,9,4};
    int n=6;
    insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}