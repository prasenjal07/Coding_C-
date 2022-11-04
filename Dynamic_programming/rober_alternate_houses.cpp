#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
//leaving !st element
int solve1(int arr[],int n){
    if(n==1){
        return arr[n];
    }
    if(n<=0){
        return 0;
    }
    int pick1=solve1(arr,n-2)+arr[n];
    int not_pick=solve1(arr,n-1);
    return max(pick1,not_pick);
}

int solve2(int arr[],int n){
 if(n==0){
    return arr[0];
  }
 if(n<0){
    return 0;
  }
 int pick=solve2(arr,n-2)+arr[n];
 int not_pick=solve2(arr,n-1);

 return max(pick,not_pick);
}

int main(){
    int arr[]={1,3,4,1};
    int n=3;
    cout<<max(solve1(arr,n),solve2(arr,n-1));
    return 0;
}