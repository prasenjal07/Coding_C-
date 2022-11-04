#include<iostream>
using namespace std;
void subSets(int arr[],int size){
    for(int i=0;i<(1<<size);i++){
        for(int j=0;j<size;j++){
            if( i & 1<<j){
                cout<<arr[j];
            }
        }
        cout<<endl;
    }

}
int main()
{
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    subSets(arr,size);
    return 0;


}