#include<iostream>
#include<iterator>
#include<set>

using namespace std;

int main(){
    multiset<int,greater<int>>ms;
    multiset<int,greater<int>> :: iterator itr;


    ms.insert(2);
    ms.insert(5);
    ms.insert(0);
    ms.insert(2);
    ms.insert(5);
    ms.insert(5);
    ms.insert(7);
    ms.insert(8);


    for(itr=ms.begin();itr!=ms.end();++itr){
        cout<<*itr<<endl;
    }

    // remove all elements up to element
    // with value 7 in ms
    ms.erase(ms.find(5),ms.end());
    cout<<"new elements"<<endl;

    for(itr=ms.begin();itr!=ms.end();++itr){
        cout<<*itr<<endl;
    }
    return 0;
}