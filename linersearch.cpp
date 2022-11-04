#include<iostream>
using namespace std;
int findingindex(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return i;
        } 
        
    }
    return -1;

}

int main(){
    int n;
    int k,requiredindex;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int arr[n];
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;
    cout<<"enter the array elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>k;
        arr[i]=k;
        }
    requiredindex=findingindex(arr,n,key);
    cout<<"the index is :"<<requiredindex<<endl;
    return 0;
    }