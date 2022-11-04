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
NODE* REVERSE(NODE* &head){
    NODE*prepntr=NULL;
    NODE*currpntr=head;
    NODE*nextpntr;
    while(currpntr!=NULL){
       nextpntr=currpntr->link;
       currpntr->link=prepntr;

       prepntr=currpntr;
       currpntr=nextpntr;
    }
    return prepntr;

}
void DELETION(NODE* &head,int val){
    NODE* temp=head;
    while(temp->link->data!=val){
        temp=temp->link;
    }
    NODE*todelete=temp->link;
    temp->link=temp->link->link;
    delete todelete;
}
bool SEARCH(NODE* &head,int key){
    NODE*temp=head;
    while(temp!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->link;
    }
    return false;
}
void INSERTatHEAD(NODE* &head,int val){
    NODE* n=new NODE(val);
    n->link=head;
    head=n;
    
}

void INSERTatEND(NODE* &head,int val){
    NODE* n=new NODE(val);
    if(head==NULL){
        head=n;
        return;
    }
    NODE* temp=head;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link=n;
}

void display(NODE * &head){
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
    display(head);
    INSERTatHEAD(head,0);
    display(head);
    cout<<SEARCH(head,2)<<endl;
    DELETION(head,6);
    display(head);
    NODE*new1=REVERSE(head);
    display(new1);
    return 0;
}