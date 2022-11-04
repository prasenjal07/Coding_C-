#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"entering the size of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"entering the elements of array"<<endl;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr[i]=temp;
    }
    int N = 1e6+3;
    int array[N];
    for(int i=0;i<N;i++){
        array[i]=-1;
    }
    int minindex = 10000;
    for(int i=0;i<n;i++){
        if(array[arr[i]]!=-1){
            minindex=min(minindex,array[arr[i]]);
        }
        else{
            array[arr[i]]=i;
                    }
    }
    if(minindex==10000){
        cout<<"-1";
    }
    else{
        cout<<minindex+1;
    }
    return 0;
}