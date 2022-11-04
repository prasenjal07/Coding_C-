#include<iostream>
using namespace std;
int sumXor( int arr[],int n){
    int sumXOR=0;
    for(int i=0;i<n;i++){
        sumXOR=sumXOR^arr[i];
    }
    return sumXOR;
}
int main(){
    int arr[]={1,2,3,4,5,4,3,2,1};
    cout<<sumXor(arr,9);
    return 0;
    
}

