#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
//bubble sort
    /*int counter =1;
    while(counter<n){
        for(int i=0;i<(n-counter);i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        counter++;
    }*/

//selection sort

/*for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        if(arr[j]<arr[i]){
            swap(arr[i],arr[j]);
        }
    }
}*/

//insertion sort

for(int i=1;i<n;i++){
    int current=arr[i];
    int j=i-1;
    while(arr[j]>current && j>=0){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=current;
}


    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
