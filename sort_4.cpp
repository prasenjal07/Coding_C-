#include<iostream>
#include<vector>

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
void MERGERsort(int arr[],int l,int r){
    if(l<r){
        int mid=(l+r)/2;

        MERGERsort(arr,l,mid);
        MERGERsort(arr,mid+1,r);



        merge(arr,l,mid,r);
    }
}
void display(int arr[],int n){
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    int arr[]={4,5,3,2,6,9,8,7,1};
    int n=9;
    display(arr,n);
    MERGERsort(arr,0,8);
    display(arr,n);
    return 0;
}