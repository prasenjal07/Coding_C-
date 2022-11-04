#include<iostream>
using namespace std;

bool binary_search(int arr[],int n,int k){
    int l=0;
    int r=n-1;
    while(l<r){
        int mid=(l+r)/2;
        if(arr[mid]==k){
            return true;
        }
        else if(arr[mid]>k){
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }

    return false;
}
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    int n = 9;
    if(binary_search(arr,n,10)){
        cout<<"element is present"<<endl;
    }
    else{
        cout<<"element is not present"<<endl;
    }

    return 0;
}