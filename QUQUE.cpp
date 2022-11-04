#include<iostream>
using namespace std;
#define n 20

class queue{
    int* arr;
    int front;
    int back;
    public:
    queue(){
      arr = new int[n];
      front=-1;
      back=-1;
      }
    void push(int a){
          if(back==n-1){
            cout<<"there is no more space in queue"<<endl;
          }
          back++;
          arr[back]=a;
          if(front==-1){
            front++;
          }
    }
    void pop(){
        if(front==-1 || front>back){
           cout<<"nothing to pop"<<endl;
        }
        front++;
    }
    int peek(){
        if(front==-1 || front>back){
            cout<<"nothing to peek"<<endl;
        }
        return arr[front];
    }
    bool empty(){
        if(front==-1 || front>back){
            return true;
        }
        else return false;
    }
};


int main(){
    queue q;
    q.push(2);
    q.push(4);
    q.push(6);
    q.push(8);
    q.push(10);

    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.peek()<<endl;
    q.pop();
    cout<<q.empty()<<endl;
    
return 0;

}