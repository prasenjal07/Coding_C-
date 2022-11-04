#include<iostream>
#include<vector>

using namespace std;

void BUBBLE_SORT(int arr[],int n){


    int count=1;
    while(count<=n){
        for(int i=0;i<n;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }

        count++;
    }

    return;
}


void SELECTION_SORT(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }


    return ;
}

void INSERTION_SORT(int arr[],int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        int current = arr[i];

        while(current<arr[j] && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }


    return ;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    INSERTION_SORT(arr,n);
      /*  int counter = 1;
        while(counter<=n){
        for(int i=0;i<(n-counter);i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
        counter++;
        }*/

        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }

        return 0;
    
}