#include<iostream>
using namespace std;

int main(){
    int n;
    
    cout<<"input the no of arr elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    for(int i=0;i<n;i++){

        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
             swap(arr[i],arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;

}