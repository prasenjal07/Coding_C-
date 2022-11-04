#include<iostream>
#include<stack>
 using namespace std;

 class que{
    stack<int>s1;
    stack<int>s2;

    public:
    void pushh(int x){
        s1.push(x);
    }
    int popp(){
        if(s1.empty()&&s2.empty()){
            cout<<"kya hii karu yaar mai aaab"<<endl;
            return -1;
        }
         if(s2.empty()){
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
         }
         int val=s2.top();
         s2.pop();
         return val;
    }

  

 };
 int main(){
    que q;
    q.pushh(2);
    q.pushh(5);
    q.pushh(6);
    q.pushh(9);
    cout<<q.popp()<<endl;
    cout<<q.popp()<<endl;
    cout<<q.popp()<<endl;
    cout<<q.popp()<<endl;
    cout<<q.popp()<<endl;
    return 0;
 }