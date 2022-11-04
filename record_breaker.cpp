#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter the size of array" << endl;
    cin >> n;
    int arr[n+1];
    arr[n]=-1;
    cout << "enter the aray elements" << endl;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        temp = arr[i];
    }
    int maxx=-1;

    for(int i=0;i<n;i++){
        if(arr[i]>maxx && arr[i]>arr[i+1]){
            cout<<"the"<<" "<<(i)<<" "<<"is an record breaking day"<<endl;
            }
        maxx=max(maxx,arr[i]);
        } return 0;
        }
    
   
       