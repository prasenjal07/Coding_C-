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

    int i=0,j=0;
    int k=l;
    while(n1>i && n2>j){
        if(a[i]<b[j]){
            arr[k]=a[i];
            i++;
            k++;
        }
        else{
            arr[k]=b[j];
            k++;
            j++;
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

}
void MERGEsort(int arr[],int l,int r){
    int mid=(l+r)/2;
    if(l<r){
    MERGEsort(arr,l,mid);
    MERGEsort(arr,mid+1,r);

    MERGE(arr,l,mid,r);
    }
}
int main(){
    int arr[]={3,2,6,5,12,14,15,88,90,71,65};
    MERGEsort(arr,0,11);
    for(int i=0;i<11;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}