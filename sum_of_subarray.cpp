#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the size of aray:"<<endl;
    cin>>n;
    int s;
    cout<<"enter the sum required value:"<<endl;
    cin>>s;
    int arr[n];
    cout<<"enter the elements of array:"<<endl;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr[i]=temp;
    }
    int i=0,j=0,st=-1,ed=-1,sum=0;
    while(j<n&&sum+arr[j]<=s){
         sum+=arr[j];
         j++;
    }
    if(sum==s){
        cout<<i+1<<" "<<j<<endl;
    
    }
    while(j<n){
        sum+=arr[j];
        while(sum>s){
            sum-=arr[i];
            i++;
        }
        if(sum==s){
            st=i+1;
            ed=j+1;
            cout<<st<<" "<<ed<<endl;
            break;
        }
        j++;
    }
return 0;
}