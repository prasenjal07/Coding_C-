#include<iostream>
#include<vector>

using namespace std;
void printF(int arr[],vector<int>&v,int n,int i){
    if(i==n){
        for(auto it : v){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    v.push_back(arr[i]);
    printF(arr,v,n,i+1);//considering ith element;
    v.pop_back();
    printF(arr,v,n,i+1);//not considering ith element;
}
int main(){
    int arr[]={3,1,2};
    
    int n=3;
    vector<int>v;
    printF(arr,v,n,0);
    return 0;
}