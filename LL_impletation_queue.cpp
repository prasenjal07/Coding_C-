#include<iostream>
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

class QUEUE{
        NODE* front;
        NODE* back;

        public:
        QUEUE(){
            front=NULL;
            back=NULL;
        }

        void push(int x){
            NODE* n= new NODE(x);
            if(front==NULL){
                back=n;
                front=n;
                return;
            }
            back->link=n;
            back=n;
        }

        void pop(){
            if(front==NULL){
                cout<<"underflow......no elements";
                return;
            }
            NODE* todelete=front;
            front = front->link;
            delete todelete;
        }

        int peek(){
            if(front==NULL){
                cout<<"gandu...elements khatam ho gaye";
                return -1;
            }
            return front->data;
        }

        bool empty(){
            if(front==NULL){
                return true;
            }
            return false;
        }
};


int main(){
     QUEUE q;
     q.push(2);
     q.push(2);
     q.push(2);
     q.push(2);
     q.push(2);
     q.push(2);
     q.push(2);
    cout<< q.peek();
     q.pop();
    cout<< q.peek();
     q.pop();
    cout<< q.peek();
     q.pop();
    cout<< q.peek();
     q.pop();
    cout<< q.peek();
     q.pop();
    cout<< q.peek();
     q.pop();
    cout<< q.peek();
     q.pop();
    cout<< q.peek();
     q.pop();
     cout<<q.empty();


    return 0;
}