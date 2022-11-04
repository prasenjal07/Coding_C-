#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int arr[]={2,1,4,9};
    int n=3;
    int prev1=0;
    int prev2=0;
    int curr;
    for(int i=0;i<=n;i++){
       curr=max(prev1+arr[i],prev2);
       prev1=prev2;
       prev2=curr;
    }

    cout<<curr<<endl;
    return 0;
}