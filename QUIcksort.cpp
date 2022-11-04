#include<iostream>
using namespace std;
int partition(int arr[],int l,int r){
    int pivot=arr[r];
    int i=l-1;
    for(int j=l;j<r;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);

        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}
void QUICKsort(int arr[],int l,int r){
    if(l<r){
        int PI=partition(arr,l,r);
        QUICKsort(arr,l,PI-1);
        QUICKsort(arr,PI+1,r);


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