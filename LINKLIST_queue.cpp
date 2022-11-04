#include<iostream>
#include<stack>

using namespace std;

class NODE{
    public:
    int data;
    NODE* link;


    NODE(int val){
       data=val;
       link=NULL;
    }
};

class queuess{
    NODE* front;
    NODE* back;
    public:
    queuess(){
        front=NULL;
        back=NULL;
    }

    void push(int x){
        NODE* n=new NODE(x);
        if(front==NULL){
            front=n;
            back=n;
            return;
        }
        back->link=n;
        back=n;
    }

    void pop(){
        if(front==NULL){
            cout<<"pehle kuch add toh kar bhen ke lode";
            return;
        }
        NODE* todelete=front;
        front=front->link;
        delete todelete;

    }
    int peek(){
        if(front==NULL){
            cout<<"kya peek kar raha lavde.....element daal pehle"<<endl;
            return -1;
        }
        return front->data;
    }
    bool ISempty(){
        if(front==NULL){
            return true;
        }
        return false;
    }

};

int main(){
    queuess q;
    q.push(1);
     q.push(2);
      q.push(3);
       q.push(4);
        q.push(5);
         q.push(6);
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
         cout<<q.peek()<<endl;
         q.pop();


         return 0;
         
}