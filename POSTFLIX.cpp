#include<iostream>
#include<stack>
#include<math.h>
#include<string>

using namespace std;

int OPERATIONPOSTFIX(string s){
    stack<int>st;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
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
    string s="46+2/5*7+";
    cout<<OPERATIONPOSTFIX(s);
    return 0;

}