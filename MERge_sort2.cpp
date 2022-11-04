#include<iostream>
using namespace std;


void MERGE(int arr[],int l,int mid,int r){
   int n1=mid-l+1;
   int n2=r-mid;

   int a[n1];
   int b[n2];

   for(int i=0;i<n1;i++){
    a[i]=arr[l+i];
   }
   for(int i=0;i<n2;i++){
    b[i]=arr[mid+i+1];
   }

   int i=0,j=0,k=l;
   while(i<n1 && j<n2){
     if(a[i]<b[j]){
        arr[k]=a[i];
        k++;
        i++;
     }
     else{
        arr[k]=b[j];
        k++;
        j++;
     }
   }
   while(i<n1){
    arr[k]=a[i];
    k++;
    i++;
   }
   while(j<n2){
    arr[k]=b[j];
    k++;
    j++;
   }

}

void MERGESORT(int arr[],int l,int r){
    
  
    if(r>l){
        int mid =(r+l)/2;
        MERGESORT(arr,l,mid);
        MERGESORT(arr,mid+1,r);


        MERGE(arr,l,mid,r);
          
    }
}


int main(){
    int arr[]={2,3,8,7,27,17,14,15,4,5,30,20};
   
   
    MERGESORT(arr,0,11);
    
    
    for(int i=0;i<12;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}