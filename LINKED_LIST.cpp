#include<iostream>
using namespace std;

class NODE{
    public:
int data;
NODE* link;



NODE(int val){
    data = val;
    link = NULL;
}
};



void INSERTatTAIL(NODE* &head,int val){
    NODE* n = new NODE(val);

    if(head==NULL){
        head=n;
        return;
    }

    NODE* temp=head;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link = n;
}

void display(NODE* head){
    NODE* temp=head;
    while(temp!=NULL){
        temp=temp->link;
        cout<<temp->data<<" ";
            }
            cout<<endl;
}


int main(){
    NODE* head=NULL;
    INSERTatTAIL(head,2);
    INSERTatTAIL(head,5);
    INSERTatTAIL(head,12);
    display(head);
    return 0;
}