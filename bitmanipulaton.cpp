#include<iostream>
using namespace std;
int GetBit(int n,int position){
    return ((n & (1<<position))!=0);
}
int SetBit(int n,int position){
    return (n|(1<<position));
    }
int ClrBit(int n,int position){
     int mask=~(1<<position);
     return (mask & n);
}
int UpdtBit(int n,int position,int updt){
    int mask =~(1<<position);
    int clr= (n & mask);
    return (clr | updt<<position);
}
int main(){
cout<<GetBit(8,1)<<endl;
cout<<SetBit(8,1)<<endl;
cout<<ClrBit(10,1)<<endl;
cout<<UpdtBit(10,1,0)<<endl;
return 0;
}
