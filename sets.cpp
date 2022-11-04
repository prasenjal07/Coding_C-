#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int,greater<int>>s;

    s.insert(4);
    s.insert(5);
    s.insert(9);
    s.insert(10);
    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(1);

    set<int>s2(s.begin(),s.end());

    

    set<int> :: iterator itr;
    for(itr=s.begin();itr!=s.end();itr++){
        cout<<*itr<<" ";
    }
    cout<<endl;
    for(itr=s2.begin();itr!=s2.end();itr++){
        cout<<*itr<<" ";
    }
    s2.erase(s2.begin(),s2.find(5));
    cout<<endl;
    cout<<s2.size()<<endl;
    cout<<s.size();

    return 0;
}