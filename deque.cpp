#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int>dq;
    dq.push_back(2);
    dq.push_back(4);
    dq.push_front(1);
    dq.push_front(3);

    for( auto i : dq){
        cout<<i<<" "<<endl;
    }

    return 0;
}