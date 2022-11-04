#include<iostream>
using namespace std;

class NODE{
         public:
         int data;
         NODE* link;



         NODE(int val){
            data = val;
            link=NULL;
         }
};
NODE* reverseRECURSIVE(NODE* &head){
    if(head==NULL || head->link==NULL){
        return head;
    }

    NODE* newhead=reverseRECURSIVE(head->link);
    head->link->link=head;
    head->link=NULL;

    return newhead;

}
NODE* REVERSEknodes(NODE* &head,int k){
    NODE* prevptr=NULL;
    NODE* currentptr=head;
    NODE* nextptr;
    int count=0;
    while(count<k && currentptr!=NULL){
        nextptr=currentptr->link;
        currentptr->link=prevptr;

        prevptr=currentptr;
        currentptr=nextptr;
        count++;
    }
    if(nextptr!=NULL){
     return head->link = REVERSEknodes(nextptr,k);
    }
    return prevptr;
}


NODE* REVERSe(NODE* &head){
    NODE* prevnode=NULL;
    NODE* currentnode=head;
    NODE* nextnode;
    while(currentnode!=NULL){
        nextnode=currentnode->link;
        currentnode->link=prevnode;


        prevnode=currentnode;
        currentnode=nextnode;
    }
    return prevnode;
}




void INSERTatTAIL(NODE* &head,int val){
    NODE*n = new NODE(val);
    if(head==NULL){
        head=n;
        return;
    }


    NODE*temp=head;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link=n;

}

void display(NODE* head){
  NODE*temp=head;
  while(temp!=NULL){
    cout<<temp->data<<" ";
    temp=temp->link;
  }
  cout<<endl;
}

int main(){
      NODE* head=NULL;
      INSERTatTAIL(head,3);
      INSERTatTAIL(head,4);
      INSERTatTAIL(head,7);
      INSERTatTAIL(head,9);
      INSERTatTAIL(head,1);
      INSERTatTAIL(head,5);
     int k=2;
     NODE * newthing=REVERSEknodes(head,k);
     display(newthing);
     return 0;

}