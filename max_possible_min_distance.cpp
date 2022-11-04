#include<iostream>
#include<algorithm>

using namespace std;
bool ISfeasible(int arr[],int n,int k,int mid){
    int pos=arr[0];
    int count=1;
    for(int i=0;i<n;i++){
        if((arr[i]-pos)>=mid){
            pos=arr[i];
            count++;
            if(count==k){
                return true;
            }
        }
    }
    return false;

}

int largest_MIN_distance(int arr[],int n,int k){
sort(arr,arr+n);
int left=1;
int right=arr[n-1];
int result=-1;
while(left<right){
    int mid=(left+right)/2;
    if(ISfeasible(arr,n,k,mid)){
        result=max(result,mid);
        left=mid+1;
    }
    else{
        right=mid;
    }
}
return result;
}

int main(){
    int arr[]={1,2,8,4,9};
    int n=5;
    int k=3;
    int ans=largest_MIN_distance(arr,n,k);
    cout<<ans;
    return 0;
}