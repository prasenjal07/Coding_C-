#include<iostream>
#include<vector>

using namespace std;
bool printF(int i,int n,int sum,int k,int arr[],vector<int>&v){
    if(i==n){
        if(sum==k){
            for(auto m : v){
                cout<<m<<" ";
            }
            cout<<endl;
            return true;
        }
    return false;
    }
    v.push_back(arr[i]);
    sum=sum+arr[i];
    if(printF(i+1,n,sum,k,arr,v)==true){
        return true;
    }
    sum=sum-arr[i];
    v.pop_back();
    if(printF(i+1,n,sum,k,arr,v)==true){
        return true;
    }
    
    return false;

}
int main(){
    int arr[]={1,2,1};
    int n=3;
    int k=2;
    vector<int>v;
    printF(0,n,0,k,arr,v);
    return 0;
}