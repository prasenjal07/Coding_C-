#include<iostream>
#include<vector>
using namespace std;
class NODE {
    public:
        int data;
        NODE* link;

        NODE(int val){
            data=val;
            link=NULL;
        }
};
void INSERT(int val,NODE* head){
    NODE* n= new NODE(val);
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

void NODEMANIPULATION(NODE* &head){
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
void display(NODE* &head){
    NODE* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}

int main(){
    NODE* head=NULL;
   int arr[]={1,2,3,4,5,6,7};
   for(int i=0;i<7;i++){
        INSERT(arr[i],head);
   }
   display(head);
   //NODEMANIPULATION(head);
   //display(head);
   return 0;
}