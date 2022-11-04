#include<iostream>
#include<algorithm>
using namespace std;


int main(){
    int arr[]={-12,-11,0,0,1,4,2,3,8,7,12,6};

    sort(arr,arr+12);
    for(int i=0;i<12;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ans1=0,ans2=0;

    ans1=arr[11]*arr[10]*arr[9];
    ans2=arr[0]*arr[1]*arr[11];

    int ans = max(ans1,ans2);

    cout<<ans;
}

