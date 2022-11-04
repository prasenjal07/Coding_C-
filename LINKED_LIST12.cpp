#include<iostream>
using namespace std;

class NODE{
    public:
      int data;
      NODE* link;



      NODE(int val){
        data=val;
        link=NULL;
      }
};

void REMOVECYCLE(NODE* &head){
    NODE* slow;
    NODE* fast;
    do{
        slow=slow->link;
        fast=fast->link->link;

    }
    while(slow!=fast);
    fast=head;
    while(slow->link!=fast->link){
        slow=slow->link;
        fast=fast->link;
    }
    slow->link=NULL;


}
bool DETECTCYCLE(NODE* &head){
    NODE* slow;
    NODE* fast;
    while(fast!=NULL && fast->link!=NULL){
        slow=slow->link;
        fast=fast->link->link;
        if(slow==fast){
            return true;
        }

    }
    return false;
}


void MAKECYCLE(NODE* &head,int pos){
    NODE* temp=head;
    NODE* startpt;
    int count=1;
    while(temp->link!=NULL){
        if(count==pos){
            temp=startpt;
        }
        temp=temp->link;
        count++;

    }
    temp->link=startpt;
}

void INSERTatEND(NODE* &head,int val){
    NODE* n = new NODE(val);
    if(head==NULL){
        head=n;
        return;
    }

    NODE* temp = head;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link=n;

}

void display(NODE* &head){
    NODE* temp=head;
    while(temp!=NULL){
        
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;
}

int main(){
    NODE* head=NULL;
    INSERTatEND(head,2);
    INSERTatEND(head,4);
    INSERTatEND(head,6);
    INSERTatEND(head,8);
    INSERTatEND(head,10);
    INSERTatEND(head,12);
    display(head);
    MAKECYCLE(head,5);
    cout<<DETECTCYCLE(head)<<endl;
    return 0;

}