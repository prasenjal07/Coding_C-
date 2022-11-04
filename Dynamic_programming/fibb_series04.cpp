#include<iostream>
using namespace std;
//optimised space complexity//O(1)
//time complexity O(n)//
int main(){
int pre1=0;
int pre2=1;
int fibb;
int n;
cin>>n;
for(int i=2;i<=n;i++){
    fibb=pre1+pre2;
    pre1=pre2;
    pre2=fibb;
}
 cout<<fibb;

return 0;
}