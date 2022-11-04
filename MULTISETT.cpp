#include<iostream>
#include<set>

using namespace std;

int main(){
    multiset<int>ms;
    ms.insert(2);
    ms.insert(2);
    ms.insert(9);
    ms.insert(10);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    multiset<int> :: iterator itr;

    for(itr=ms.begin();itr!=ms.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    ms.erase(2);
    
    for(itr=ms.begin();itr!=ms.end();itr++){
        cout<<*itr<<" ";
    }
    ms.erase(ms.begin(),ms.find(9));
    cout<<endl;
    for(itr=ms.begin();itr!=ms.end();itr++){
        cout<<*itr<<" ";
    }
    return 0;
}