#include<iostream>
#include<climits>

using namespace std;

bool ISfeasible(int arr[],int N,int M,int mid){
    int students=1;
    int sum=0;
    for(int i=0;i<N;i++){
        if(arr[i]>mid){
            return false;
        }
        if(sum+arr[i]>mid){
            students++;
            sum=arr[i];
            if(students>M){
                return false;
            }
        }
        else{
            sum+=arr[i];
        }
    }
    return true;
}

int alloc_MAX_pages(int arr[],int N,int M){
    if(M>N){
        return -1;
    }
    int summ=0;
    for(int i=0;i<N;i++){
        summ+=arr[i];
    }
    int start=0;
    int end=summ;
    int ans=INT_MAX;

    while(start<=end){
        int mid=(start+end)/2;
        if(ISfeasible(arr,N,M,mid)){
            
            ans=min(ans,mid);
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }

    return ans;

}

int main(){
    int arr[]={12,34,67,90};
    int N=4;
    int M=2;
    int ans=alloc_MAX_pages(arr,N,M);
    cout<<ans;
    return 0;
}