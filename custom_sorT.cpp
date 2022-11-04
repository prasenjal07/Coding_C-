#include<iostream>
#include<algorithm>
using namespace std;

bool comparePAIRS((int arr[int a][0]),(int arr[int b][0])){
    return (arr[a][0]<arr[b][0]);
}

int main(){
    int arr[3][2]={{3,2},{1,2},{9,7}};
    sort(arr,arr+3,comparePAIRS());
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}