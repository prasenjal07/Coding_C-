#include<iostream>
#include<stack>
#include<string>
#include<math.h>
using namespace std;

int OPERATIONPREFIX(string s){
    stack<int>st;
    for(int i=s.length()-1;i>=0;i--){
    if(s[i]<='9' &&  s[i]>='0'){
          st.push(s[i]-'0');
    }
    else{
        int op1=st.top();
        st.pop();
        int op2=st.top();
        st.pop();
        switch (s[i])
        {
        case '+':
            /* code */
            st.push(op1+op2);
            break;
         case '-':
            /* code */
            st.push(op1-op2);
            break;
         case '*':
            /* code */
            st.push(op1*op2);
            break;
         case '/':
            /* code */
            st.push(op1/op2);
            break;
         case '^':
            /* code */
            st.push(pow(op1,op2));
            break;
        
        
        
        }
    }
    }
    return st.top();
}

int main(){
    string s="-+7*45+20";
    cout<<OPERATIONPREFIX(s);
    return 0;
}
