#include<iostream>
#include<vector>

using namespace std;
void printF(int arr[],vector<int>&v,int n,int k,int i,int sum){
    if(i==n){
        if(sum==k){
            for(auto m:v){
                cout<<m<<" ";
            }
            cout<<endl;
            
        }
        return;
    }
    v.push_back(arr[i]);
    sum=sum+arr[i];
    printF(arr,v,n,k,i+1,sum);
    sum=sum-arr[i];
    v.pop_back();
    
    printF(arr,v,n,k,i+1,sum);
}
int main(){
    int arr[]={1,2,1};
    int k=2;
    int n=3;
    //int sum=0;
    vector<int>v;

    printF(arr,v,n,k,0,0);
    return 0;
}
