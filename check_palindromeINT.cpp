#include<iostream>
#include<vector>


using namespace std;


/*bool check_palindrome(long long a){
    long long k=a;
    int r=0;
    while(k){
        int rem=k%10;
        r=r*10+rem;
        k=k/10;
    }
    

    if(a==r){
        return true;
    }

}*/
bool check_palindrome(long long a){
    long long k=a;
    long long rev=0;


    while(k){
        int rem=k%10;
        rev=rev*10+rem;
        k=k/10;
    }

    if(rev==a){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    long long a=12321;
    cout<<check_palindrome(a);
    return 0;
}