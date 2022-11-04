#include<iostream>
#include<vector>

using namespace std;


/*void recursive(int i,int sum){
    if(i==0){
        cout<<sum<<endl;
        return;
    }
    recursive(i-1,sum+i);
}*/

int recursive(int n){
   if(n==0){
    return 0;
   }
   int sum=n+recursive(n-1);
   return sum;
}
int main(){
int n;
cin>>n;
int k = recursive(n);
cout<<k;
return 0;
}