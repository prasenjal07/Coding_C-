#include<iostream>
#include<stack>

using namespace std;

class QUEUE{
   stack<int>s1;
   stack<int>s2;

  public:
   void pushh(int x){
    s1.push(x);
   }

   int popp(){
    if(s1.empty() && s2.empty()){
        cout<<"queue is empty"<<endl;
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
    QUEUE q;
    q.pushh(1);
    q.pushh(2);
    q.pushh(3);
    q.pushh(4);
    cout<<q.popp()<<endl;
    cout<<q.popp()<<endl;
    cout<<q.popp()<<endl;
    cout<<q.popp()<<endl;
    cout<<q.popp()<<endl;
    return 0;
}