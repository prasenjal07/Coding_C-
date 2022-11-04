#include<iostream>
#include<vector>

using namespace std;
void recursive(int count){
    if(count==0){
        return;
    }
   
    count--;
    recursive(count);
    cout<<count+1<<endl;
}

int main(){
recursive(5);
return 0;
}