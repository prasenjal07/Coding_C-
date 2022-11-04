#include<iostream>
using namespace std;
void cmpareBits(int n){
      if( (n & (n-1))==0){
        cout<<"the no is perfect power of 2"<<endl;
      }
      else{
        cout<<"the no is not perfect power of 2"<<endl;
      }
}
int main(){
    int n;
    cin>>n;
    cmpareBits(n);
    return 0;

}