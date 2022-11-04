#include<iostream>
using namespace std;


class node{
    public:
    int data;
    node* next;


    node(int val){
        data=val;
        next=NULL;
    }

};
void INSERTatHEAD(node* &head,int val){
    node*n=new node(val);
    n->next=head;
    head=n;
}

void INSERTatTAIL(node* &head,int val){
   node*n=new node(val);

   if(head==NULL){
    head=n;
    return;
   }


   node* temp=head;
   while(temp->next!=NULL){
    temp=temp->next;
   } 
   temp->next = n;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}


int main(){

    node* head=NULL;
    INSERTatTAIL(head,1);
    INSERTatTAIL(head,4);
    INSERTatTAIL(head,7);
  
    INSERTatHEAD(head,6);
    display(head);
     return 0;
}