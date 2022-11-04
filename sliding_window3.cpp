#include<iostream>
#include<vector>
#include<map>

using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14};
    int n=14;
    int k=2;
    
   
    int sum_initial=0;
    for(int i=0;i<k;i++){
     sum_initial+=arr[i];
    }
   cout<<sum_initial<<endl;
   int j=k;
   int ans=sum_initial;
   while(j<n){
   sum_initial+=(arr[j]-arr[j-k]);
   ans=min(ans,sum_initial);
   j++;
   }

   cout<<ans<<endl;
}