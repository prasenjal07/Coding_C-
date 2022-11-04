#include<iostream>
#include<vector>

using namespace std;

void bubbleSORT(int arr[],int n){
int count=1;
while(count<n)
{
for(int i=0;i<n-1;i++){
    if(arr[i]>arr[i+1]){
        swap(arr[i],arr[i+1]);
    }
}
count++;
}

return;
}

void selectionSORT(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
    return;
}

void insertionSORT(int arr[],int n){
    for(int i=1;i<n;i++){
        int current = arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }

    return;
}

void display(int arr[],int n){
    for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    int arr[]={1,5,2,3,9,8,6,7,4};
    int n=9;
    display(arr,n);
    //bubbleSORT(arr,n);
    //selectionSORT(arr,n);
    insertionSORT(arr,n);
    display(arr,n);
    return 0;
}