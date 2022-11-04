#include<iostream>
using namespace std;

void MERGE(int arr[],int l,int mid,int r){
    int n1 = mid-l+1;
    int n2 = r-mid;

    int a[n1];
    int b[n2];

    for(int i=0 ; i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int i =0; i<n2 ;i++){
        b[i]=arr[mid+1+i];
    }

    int i=0,j=0,k=l;

    while(n1>i && n2>j){
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

void MERGEsort(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        MERGEsort(arr,l,mid);
        MERGEsort(arr,mid+1,r);

        MERGE(arr,l,mid,r);
    }
}

int main(){
    int arr[]={2,5,4,17,9,3,6,15};
    MERGEsort(arr,1,7);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
         }
    return 0;
    
}