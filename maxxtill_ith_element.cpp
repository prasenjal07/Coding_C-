#include<iostream>
using namespace std;
int maxfori(int arr[],int n){
    int maxx=0;
    for(int i=0;i<n;i++){
        maxx=max(arr[i],maxx);
    }
    return maxx;

};
int main(){
    int n,i,maximum;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    cout<<"enter the array:"<<endl;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"enter the no. 'i' till which you want maxx:";
    cin>>i;
    maximum=maxfori(arr,i);
    cout<<"the max no till given 'i' is "<<maximum<<endl;
    return 0;


}