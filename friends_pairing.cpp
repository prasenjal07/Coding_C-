#include<iostream>
using namespace std;

int FriendsPair(int n){
    if(n==0||n==1||n==2){
        return n;
    }
    int singles=FriendsPair(n-1);
    int couples=FriendsPair(n-2);
    return singles + couples*(n-1);

}
 

int main()
{

    cout<<FriendsPair(4);
    return 0;
}