#include<iostream>
using namespace std;
void swapp(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int Partition(int arr[],int l,int r){
    int Pivot=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++){
        if(arr[j]<Pivot){
            i++;
            swapp(arr,i,j);
        }
    }
    swapp(arr,r,i+1);
    return i+1;
}

void QUICKSORT(int arr[],int l,int r){
    if(l<r){
        int PI=Partition(arr,l,r);

        QUICKSORT(arr,l,PI-1);
        QUICKSORT(arr,PI+1,r);
    }
}

int main(){
    int arr[]={1,2,9,8,14,29,15,13,20,50,29};
    QUICKSORT(arr,0,10);
    for(int i=0;i<11;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}