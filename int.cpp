#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    string s="h o pptk l mppo";

    int i=0;
    int j=(s.length()-1);
    cout<<s<<endl;
    while(i<j){
        if(s[i]!=' ' && s[j]!=' '){
            swap(s[i++],s[j--]);
           
        }
       else if(s[i]==' '){
            s[i++]='@';
            
        }
       else if(s[j]==' ')
        {
            s[j--]='@';
           
        }
    }


    cout<<s;

    return 0;

}