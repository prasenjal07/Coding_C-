#include<iostream>
#include<stack>
using namespace std;

void reversingSENTENCE(string s){
    stack<string>st;
    
    for(int i=0;i<s.length();i++){
        string word="";
        while(s[i]!=' ' && i<s.length())
        {
            word+=s[i];
            i++;

        }
        st.push(word);
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}






























void REVERSEINGsentence(string s){
   stack<string>st;
    for(int i=0;i<s.length();i++){
        string word="";
        while(s[i]!=' '  &&  i<s.length()){
            word+=s[i];

            i++;

        }
        st.push(word);
    }

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main(){
    string s;
    s="aree diyo diyo disak disak disak DJ rada";
    REVERSEINGsentence(s);
    return 0;
}