#include<iostream>
#include<algorithm>
using namespace std;

int findPOS(int arr[],int k,int n){
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            return i;
        }
    }
}

int main(){
    int arr[]={1,2,9,6,3};
    int swaps=2;
    int arr2[5];

   copy(arr,arr+5,arr2);
    
   sort(arr2,arr2+5,greater<int>());
   int i=0;
   while(i<5 && swaps!=0){
    if(arr[i]==arr2[i]){
        i++;
    }
    else{
        int pos=findPOS(arr,arr2[i],5);
        swap(arr[i],arr[pos]);
        swaps--;
        i++;
    }
   }

   for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
   }

    return 0;
}