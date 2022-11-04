include<>
using namespace std;

void replacePI(string s){
    if(s.length()==0){
        return;
    }
    
   else if(s[0]==p && s[1]==i){
        cout<<"3.14";
        s.substr(2);
    }
    else{
        cout<<s[0];
        
    }
    string new = s.substr(1);
    replacePI(new);

}
int main(){
    string s;
    cin>>s;
    replacePI(s);
    return 0;
}