#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int currentsum =0;
        for(int j = i;j<n;j++){
            currentsum+=arr[j];

        }
        cout<<"the sum of sub arrays are as follows"<<endl;
        cout<<currentsum<<endl;
    }
return 0;
}