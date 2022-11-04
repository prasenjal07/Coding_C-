#include<iostream>
using namespace std;

void WAVEsort(int arr[],int n){
    for(int i=1;i<n;i+2){
        if(arr[i]>arr[i-1]){
            swap(arr[i],arr[i-1]);
        }
        if(arr[i]>arr[i+1]&&i<=(n-2)){
           swap(arr[i],arr[i+1]);
        }
    }
}