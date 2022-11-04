#include<iostream>
#include<algorithm>
using namespace std;

void swapp(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int partition(int arr[],int l,int r){
    int pivot=arr[r];
    int i=l-1;
    
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
          i++;
          swapp(arr,i,j);
        }
    }
    
    swapp(arr,i+1,r);
    return i+1;
}

void QUICKsort(int arr[],int l,int r){
    if(l<r){
    int pi=partition(arr,l,r);

    QUICKsort(arr,l,pi-1);
    QUICKsort(arr,pi+1,r);
    }
}
int main(){
    int arr[]={3,2,6,5,12,14,15,88,90,71,65};
    
    QUICKsort(arr,0,11);
    
    for(int i=0;i<11;i++){
        cout<<arr[i]<<endl;
    }



    return 0;
}