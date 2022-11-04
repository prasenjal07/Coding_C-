#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      int temp;
      cin>>temp;
      arr[i]>>temp;
    }
    int N=1e6+4;
    bool chk[N];
    for(int i=0;i<N;i++){
        chk[i]=false;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
        chk[arr[i]]=true;
        }
    }
    int ans =-1;
    for(int i=0;i<N;i++){
        if(chk[i]==false){
            ans =i;
        }
    }

    cout<<ans;
    return 0;
    }