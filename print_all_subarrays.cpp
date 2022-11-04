#include<iostream>
#include<climits>
#include<vector>

using namespace std;

int main(){
    int arr[]={-1,4,7,2};
    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
            }
            cout<<endl;
        }
    }

    // maxx sum of subarray method!!!!!!!!

    int sum1[n+1];
    sum1[0]=0;
    int sum2=INT16_MIN;
    for(int i=1;i<=n;i++){
    sum1[i]=sum1[i-1]+arr[i-1];
    }
    
    for(int i=1;i<=n;i++){
         int diff=0;
         for(int j=0;j<i;j++){
          diff=sum1[i]-sum1[j];
          sum2=max(sum2,diff);
        }
    }
    cout<<"max sum of subarray is  "<<sum2<<endl;

    //kadanes algorithm for max sum subarray
    int currsum=0;
    int max_sum=0;
    for(int i=0;i<n;i++){
     currsum=currsum+arr[i];
     currsum=max(currsum,0);
     max_sum=max(max_sum,currsum);
    }

    cout<<"max sum of subarray is  "<<max_sum<<endl;


    return 0;
}