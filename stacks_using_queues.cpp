#include<iostream>
#include<queue>

//IN THIS METHOD POP OPERATION IS MORE COSTLY//

using namespace std;

class STACKS{
     queue<int>q1;
     queue<int>q2;
     int N;


     public:

     STACKS(){
        N=0;
     }
     

     void pop(){
        if(N==0){
            cout<<"no ellements in the stack";
        }
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        q1.pop();
        N--;

        queue<int>temp=q1;
        q1=q2;
        q2=temp;

     } 

     void push(int val){
        q1.push(val);
        N++;

     }

     int TOP(){
        if(N==0){
            return -1;
        }
        while(q1.size()!=1){
            q2.push(q1.front());
            q1.pop();
        }
        int ans=q1.front();
        q2.push(q1.front());
        q1.pop();
        
        
        
        
        queue<int>temp=q1;
        q1=q2;
        q2=temp;





        return ans;
     }

    
    
    bool ISEMPTY(){
        if(N==0){
            return true;
        }
        return false;
    }





};


int main(){
    STACKS s1;
    s1.push(2);
    s1.push(3);
    s1.push(5);
    s1.push(7);
    s1.push(9);
    cout<<s1.TOP()<<endl;
    
    s1.pop();
    cout<<s1.TOP()<<endl;
    
    s1.pop();
    cout<<s1.TOP()<<endl;
    
    s1.pop();
    cout<<s1.TOP()<<endl;
    
    s1.pop();
    cout<<s1.TOP()<<endl;
    
    s1.pop();
    cout<<s1.ISEMPTY()<<endl;


    return 0;
}
