#include<iostream>
#include<stack>
#include<string>

using namespace std;

bool ISbalanced(string s){
    stack<char>st;
    bool ans=true;
    int n=s.length();
    for(int i=0;i<n;i++){
        if(s[i]=='['||s[i]=='{'||s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.top()=='('){
                st.pop();
                ans=true;

            }
            else{
                return false;
                break;
            }

        }
        else if(s[i]=='}'){
            if(st.top()=='{'){
                st.pop();
                ans = true;
            }
            else{
                return false;
                break;
            }
        }
        else if(s[i]==']'){
            if(st.top()=='['){
                st.pop();
                ans=true;
            }
            else{
                return false;
                break;
            }

        }
        else{
            return false;
            break;
        }
    }
    if(!st.empty()){
        return false;
    }
    return ans;
}

int main(){
    string s="{[)]";
    if(ISbalanced(s)){
        cout<<"string is balanced";
    }
    else{
        cout<<"string is not balanced";
    }

    return 0;
}