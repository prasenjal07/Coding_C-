#include<iostream>
using namespace std;


class train{
    
     int train_NO;
     string train_NAME;
     float ticket;
     string boarding_point;
     string destination;

     public:
     train(int k,string name,float fair,string a,string b){
        train_NO=k;
        train_NAME=name;
        ticket=fair;
        boarding_point=a;
        destination=b;
     }


     void dispaly(){
        cout<<train_NAME<<endl;
        cout<<train_NO<<endl;
        cout<<ticket<<endl;
        cout<<boarding_point<<endl;
        cout<<destination<<endl;
     }


};

int main(){
    train T1(20312,"gitanjali",2000,"nagpur","akola");;
    

    //cout<<T1.train_NO<<' '<<T1.train_NAME<<" "<<endl;

    T1.dispaly();


    return 0;

}