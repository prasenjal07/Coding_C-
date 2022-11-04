#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int arr[]={30,10,60,10,60,50};
    int n=5;
    int prev1=0;
    int prev2=0;
    int curri;
    for(int i=1;i<=n;i++){
        int secondPATH;
        int firstPATH=prev1+abs(arr[i]-arr[i-1]);
        if(i>1) secondPATH=prev2+abs(arr[i]-arr[i-2]);
        curri=min(firstPATH,secondPATH);
        prev2=prev1;
        prev1=curri;
    }
    cout<<curri;
    return 0;
}