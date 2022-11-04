#include<iostream>
using namespace std;
int count = 0;
class C{
    public:
    C(void){
        cout<<"we are now inside of the constructor,"<<endl;
        count++;

    }
    ~C(void){
        cout<<"we are now inside of the destructor"<<endl;
        count--;

    }
};
int main(){
    C c1;
    cout<<"first block"<<endl;
    {
        cout<<"entering block2"<<endl;
        C c2,c3;
        cout<<"exiting block2"<<endl;
    }
    return 0;
}