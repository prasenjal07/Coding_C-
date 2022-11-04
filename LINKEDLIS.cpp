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
void INSERTatEND(NODE* &head,int val){
    NODE* n = new NODE(val);
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

void display(NODE* &head){
    NODE* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;
}

int length(NODE* &head){
    int count=0;
    NODE* temp=head;
    while(temp!=NULL){
        temp=temp->link;
        count++;
    }
    return count;
}

int INTERSECTION(NODE* &head1,NODE* &head2){
    int l1=length(head1);
    int l2=length(head2);

    int d=0;
    NODE* ptr1;
    NODE* ptr2;
    if(l1<l2){
        d=l2-l1;
        ptr1=head2;
        ptr2=head1;
    }
    else{
        d=l1-l2;
        ptr1=head1;
        ptr2=head2;
    }
    while(d){
        ptr1=ptr1->link;
        if(ptr1==NULL){
            return -1;
        }
        d--;
    }
    while(ptr1!=NULL && ptr2!=NULL){

        if(ptr1==ptr2){
            return ptr1->data;
          }

          ptr1=ptr1->link;
          ptr2=ptr2->link;

          
    }
    return -1;
}





int main(){
    NODE* head=NULL;
    INSERTatEND(head,2);
    INSERTatEND(head,4);
    INSERTatEND(head,6);
    INSERTatEND(head,8);
    INSERTatEND(head,10);
   
    display(head);
    return 0;
}