#include<iostream>
using namespace std;

int main(){
    int arr[]={2000,500,200,100,50,20,10,5,2,1};
    int x;
    int arr2[10]={0};
    cout<<"enter the amt you wanna make"<<endl;
    cin>>x;
    
    int i=0;
    int j=0;
    while(x!=0){
    if((x-arr[i])>=0){
        x=x-arr[i];
        arr2[j]=arr2[j]+1;
        if(x==0){
            break;
        }
        
    }
    if(x<arr[i]){
        i++;
        j++;
    }
    }
    for(int i=0;i<10;i++){
        cout<<arr2[i]<<endl;
    }
    return 0;
}