#include<iostream>
#include<queue>
using namespace std;



//ITS EASY POP COSTLY PUSH METHOD//

class STACKS{
    queue<int>q1;
    queue<int>q2;
    int N;
    

    public:
    STACKS(){
     N=0;
    }


    void pushh(int val){
        q2.push(val);
        N++;
        while(!q1.empty()){
          q2.push(q1.front());
          q1.pop();
        }
        queue<int>temp=q1;
        q1=q2;
        q2=temp;
        
    }
    void popp(){
        q1.pop();
        N--;
    }
    bool ISEMPTY(){
        if(N==0){
            return true;
        }
        
        return false;
        
    }
    int TOP(){
        return q1.front();
    }
    int SIZE(){
        return N;
    }
};



int main(){
    STACKS s1;
    s1.pushh(2);
    s1.pushh(3);
    s1.pushh(5);
    s1.pushh(7);
    s1.pushh(9);
    cout<<s1.TOP()<<endl;
    cout<<s1.SIZE()<<endl;
    s1.popp();
    cout<<s1.TOP()<<endl;
    cout<<s1.SIZE()<<endl;
    s1.popp();
    cout<<s1.TOP()<<endl;
    cout<<s1.SIZE()<<endl;
    s1.popp();
    cout<<s1.TOP()<<endl;
    cout<<s1.SIZE()<<endl;
    s1.popp();
    cout<<s1.TOP()<<endl;
    cout<<s1.SIZE()<<endl;
    s1.popp();
    cout<<s1.ISEMPTY()<<endl;


    return 0;

}