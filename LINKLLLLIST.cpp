#include<iostream>
using namespace std;

class NODE{
    public:
    int data;
    NODE* link;


NODE(int val){
    data= val;
    link=NULL;
}

};

void INSERTatEND(NODE* &head,int val){
    NODE* n=new NODE(val);
    if(head==NULL){
        head=n;
        return;
    }

    NODE *temp=head;
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
}

NODE* reverseRECURSIVE(NODE* &head){
    if(head==NULL || head->link==NULL){
        return head;
    }
    NODE* newhead=reverseRECURSIVE(head->link);
    head->link->link=head;
    head->link=NULL;
    return newhead;

}
NODE* reverseINgroup(NODE* &head,int k){
    NODE*prevptr=NULL;
    NODE*currntptr=head;
    NODE*nextptr;
    int count=0;
    while(currntptr!=NULL  &&  count<k){
        nextptr=currntptr->link;
        currntptr->link=prevptr;
    

        prevptr=currntptr;
        currntptr=nextptr;
        k++;
    }
    if(nextptr!=NULL){
    head->link=reverseINgroup(nextptr,k);
    }

    return prevptr;

}   
//MERGE 2 sorted linked lists
 /*NODE* MERGE(NODE* &head1,NODE* &head2){
      NODE* ptr1=head1;
      NODE* ptr2=head2;
      NODE* ptr3;
      NODE *dummynode=new NODE(-1);
      ptr3=dummynode;

      while(ptr1!=NULL && ptr2=NULL){
        if(ptr1->data < ptr2->data){
            ptr3->link=ptr1;
            ptr1=ptr1->link;
        }
        else{
            ptr3->link=ptr2;
            ptr2=ptr2->link;
        }
        ptr3=ptr3->link;
      }

      while(ptr1!=NULL){
        ptr3->link=ptr1;
        ptr1=ptr1->link;
        ptr3=ptr3->link;
      }

      while(ptr2!=NULL){
        ptr3->link=ptr2;
        ptr2=ptr2->link;
        ptr3=ptr3->link;
      }

      return dummynode->link;
}  */

//merging 2 sorted linked llists RECURSIVE METHOD


/*NODE* recursiveMERGE(NODE* &head1,NODE* &head2){

    NODE* result;

    if(head1==NULL){
        return head2;
    }

    if(head2==NULL){
        return head1;
    }
    if(head1->data < head2->data){
        result=head1;
        result->next=recursiveMERGE(head1->next,head2);
    }

    else{
        result=head2;
        result->next=recursiveMERGE(head1,head->next);
    }
    return result;

}*/
// even nodes after ODD ones;

NODE*  NODEMANUPILATION(NODE* &head){
    NODE*odd=head;
    NODE*even=head->link;
    NODE*evenstart=even;
    while(odd->link!=NULL && even->link!=NULL){
        odd->link=even->link;
        odd=odd->link;
        even->link=odd->link;
        even=even->link;
    }
    odd->link=evenstart;

    if(odd->link!=NULL){
         even->link=NULL;
    }
}




int main(){
    NODE* head = NULL;
    int arr[]={2,4,6,8,10,12};
    for(int i=0;i<6;i++){
        INSERTatEND(head,arr[i]);
    }
    display(head);
    cout<<endl;
   /* int k=2;
    NODE* newhead=reverseINgroup(head,k);
    display(newhead);
    cout<<endl;*/

    //NODE* neewnodes=NODEMANUPILATION(head);
    //display(head);

    return 0;
    
}