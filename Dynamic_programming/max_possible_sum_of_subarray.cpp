#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
//pick and not pick technique is used/////
//with DP application
int solve(int arr[],int n){
    if(n==0){
        return arr[0];
    }
    if(n<0){
        return 0;
    }

    int pick=arr[n]+solve(arr,n-2);
    int not_pick=solve(arr,n-1);


    return max(pick,not_pick);
}

int main(){
    int arr[]={2,1,4,9};
    int n=3;
    cout<<solve(arr,n);
    return 0;
}