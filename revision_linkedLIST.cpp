#include<iostream>
using namespace std;

class DOUBLENODE{
        int data;
        DOUBLENODE* frwdlink;
        DOUBLENODE* backwdlink;


        DOUBLENODE(int val){
            data=val;
            frwdlink=NULL;
            backwdlink=NULL;
        }
};

