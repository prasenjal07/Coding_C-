#include<iostream>
#include<vector>
using namespace std;

int MAXcontigious_1_forward(vector<int>arr,int n,int i){
    int r=i;
  while(arr[r]==1 && r<n){
      r++;
  }
  return  (r-i);
}
int MAXcontigous_1_backward(vector<int>arr,int n,int i){
    int r=i;
    while(arr[r]==1 && r>=0){
        r--;
    }
    return (i-r);
}

int main(){
   vector <int> arr={0,1,0,0,0,1,1,0,0,0,1,1,0,0,1,0};
    int k;
    cout<<"enter k:";
    cin>>k;

    int n=arr.size();
    int ans1=0;
    int ans2=0;
    int j=0;
    int a=0;
    int p=0;
    int q=0;
    
    int maxANS=0;

    if(k>=n){
        cout<<n;
    }
    while(j<n){
        if(arr[j]==1){
           a=MAXcontigious_1_forward(arr,n,j);
        }
        if(arr[j+a+k]==1){
           p=MAXcontigous_1_backward(arr,n,j+a+k);
           ans1=a+k+MAXcontigious_1_forward(arr,n,j+a+k)-p;
           
        }
        if(arr[j-k]==1){
           q=MAXcontigious_1_forward(arr,n,j-k);
           ans2=a+k+MAXcontigous_1_backward(arr,n,j-k)-q;

        }
        maxANS=max(maxANS,max(ans1,ans2));

        j++;
    }
    
       
    
   
   
    
    cout<<maxANS;
    return 0;
}