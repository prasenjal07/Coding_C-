#include<iostream>

using namespace std;

void merge(int arr[],int l,int mid,int r){
    int n1=mid-l+1;
    int n2=r-mid;

    int a[n1];
    int b[n2];

    for(int i=0;i<n1;i++){
        a[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        b[i]=arr[mid+1+i];
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

void MERGEsort(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        MERGEsort(arr,l,mid);
        MERGEsort(arr,mid+1,r);


        merge(arr,l,mid,r);
    }
}

int main(){
    int arr[]={1,5,9,7,3,6,4,5,5,8,2,12,13,19};
    MERGEsort(arr,0,13);
    for(auto i : arr){
        cout<<i<<"  ";
    }

    return 0;

}