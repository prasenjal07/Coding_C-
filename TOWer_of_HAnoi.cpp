#include<iostream>
using namespace std;
void Towerofhanoi(int n,char src,char desti,char helper){
    if(n==0){
        return;
    }
    Towerofhanoi(n-1,src,helper,desti);
    cout<<"move from  "<<src<<"  to  "<<desti<<endl;
    Towerofhanoi(n-1,helper,desti,src);
}
int main ()
{
    
    Towerofhanoi(3,'a','b','c');
    return 0;
}