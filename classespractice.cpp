#include<iostream>
using namespace std;


class students{
     string des;
     public:
     string name;
     int age;
     bool gender;
     students(string s){
        name=s;
     }

     void setDES(string s){
        des = s;
     }

     void display(){
         cout<<name<<endl;
     }

     
     void printINFO(){
        cout<<"age:";
        cout<<age<<endl;
        cout<<"name:";
        cout<<name<<endl;
        cout<<"gender:";
        cout<<gender<<endl;
        


     }
};

int main()
{
    /*students arr[3];
    for(int i=0;i<3;i++){
        string s;
        cout<<"enter age"<<endl;
        cin>>arr[i].age;
        cout<<"enter name"<<endl;
        cin>>arr[i].name;
        cout<<"enter gender"<<endl;
        cin>>arr[i].gender;
        cout<<"enter des :";
        cin>>s;
        arr[i].setDES(s);
    }

    for(int i=0;i<3;i++){
        arr[i].printINFO();
}*/

students a("presenjit");
        cout<<a.name<<endl;


    return 0;
}