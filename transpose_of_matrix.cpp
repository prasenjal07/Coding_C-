#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int barr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            barr[i][j]=arr[j][i];
        }
    }
    cout<<"the transpose of matrix is as follows"<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<barr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}