#include<iostream>
#include<stack>
#include<string>
#include<math.h>
using namespace std;

int OPERATIONPREFIX(string s){
    stack<int>st;
    for(int  i=(s.length()-1);i>=0;i--){
        if(s[i]<='9' && s[i]>='0'){
            st.push(s[i]-'0');//this way we feed the difference of assci value of character 0 and character s[i]
        }
        else{
            int operator1=st.top();
            st.pop();
            int operator2=st.top();
            st.pop();
            switch (s[i])
            {
            case '+':
               
               st.push(operator1+operator2);
        
                break;
            case '-':
                
               st.push(operator1-operator2);
        
                break;
            case '*':
               
               st.push(operator1*operator2);
        
                break;

            case '/':
               
               st.push(operator1/operator2);
        
                break;
            case '^':
               
               st.push(pow(operator1,operator2));
        
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