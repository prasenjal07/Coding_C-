#include<iostream>
#include<vector>

using namespace std;
int arr[9];
void recursive(int l,int r){
    if(l>r){
        return;

    }

    swap(arr[l],arr[r]);
    recursive(l+1,r-1);
}
int main(){

    int arr[]={1,2,3,4,5,6,7,8,9};
    recursive(0,8);
    return 0;

   for(int i=0;i<9;i++){
    cout<<arr[i]<<" ";
   }
  return 0;
}