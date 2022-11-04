#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int s=0;
    int e=n;
    int mid=(s+e)/2;
    while(s<=e){

        if(key==arr[mid]){
            return mid;
        }
        else if(key>arr[mid]){
            s=mid+1;
        }
        else{
            e=mid-1;
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

    requiredindex=binarysearch(arr,n,key);
    cout<<"required index is found out to be:"<<requiredindex<<endl;    
        
        return 0;}