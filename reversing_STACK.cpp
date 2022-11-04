#include<iostream>
#include<stack>
using namespace std;


void INSERTatBOTTOM(stack<int> &st,int endelemnt){

    if(st.empty()){
        st.push(endelemnt);
        return;
    }
    int topele=st.top();
    st.pop();
    INSERTatBOTTOM(st,endelemnt);
    st.push(topele);
}

void reverseSTACK(stack<int> &st){
    if(st.empty()){
        return;
    }
    int endlelemnt=st.top();
    st.pop();
    reverseSTACK(st);
    INSERTatBOTTOM(st,endlelemnt);
}


int main(){
    stack<int>st;
    int arr[]={1,2,3,4,5,6,7,8};
    for(int i=0;i<8;i++){
        st.push(arr[i]);
    }
    reverseSTACK(st);
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
}
/*void INSERTatBOTTOM2(stack<string> &st,int elementlast){
    if(st.empty()){
        st.push(elementlast);
        return;
    }
    int latest=st.top();
    st.pop();
    INSERTatBOTTOM2(st,elementlast);
    st.push(latest);

}

void reverseSTACK2(stack<string> &st){
    if(st.empty()){
        return;
    }
    int elementlast=st.top();
    st.pop();
    reverseSTACK2(st);
    INSERTatBOTTOM2(st,elementlast);
}*/