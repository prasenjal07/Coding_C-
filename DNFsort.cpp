#include<iostream>
using namespace std;
void DNFsort(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[high],arr[mid]);
            high--;
        }
    }
}

int main(){
    int aar[]={1,0,0,0,2,2,1,2,0,1,0,2};
    DNFsort(aar,12);
    for(int i=0;i<12;i++){
        cout<<aar[i]<<" ";
    }
    return 0;
}