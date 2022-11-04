#include<iostream>
using namespace std;

#define n 100

class stack{
    int *arr;
    int top;

    public:
    stack(){
        arr = new int[n];
        top=-1;
    }
    void push(int c){
        if(top==(n-1)){
            cout<<"stack is overflowing";
        }
        top++;
        arr[top]=c;
    }
    void pop(){
        if(top==-1){
            cout<<"no elements to pop";
        }
        top--;
    }
    int TOP(){

        if(top==-1){
            cout<<"no element to the top";
        }
        return arr[top];
    }

    bool empty(){
        if(top<=-1){
            return true;
        }
        else
        return false;
    }

};

int main(){
    stack st;
    st.push(2);
    st.push(4);
    st.push(6);
    st.push(8);
    st.push(10);
    cout<<st.TOP()<<endl;
    st.pop();
    cout<<st.TOP()<<endl;
    st.pop();
    st.pop();
    st.pop();
    cout<<st.empty()<<endl;
    st.pop();
    st.pop();
    cout<<endl;
    st.pop();
    cout<<st.empty()<<endl;

}