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
NODE* NODEMANIPULATION(NODE* &head){
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


NODE* reverseLIST(NODE* &head){
    NODE* prev;
    NODE* aft;
    prev=NULL;
    NODE*curr=head;
    while(curr){
     aft=curr->link;
     curr->link=prev;
     prev=curr;
     curr=aft;
    }
    return prev;
}

NODE* recursiveREVERSE(NODE* &head)
   {
    if(!head || !(head->link))  return head;
    auto res = recursiveREVERSE(head->link);
    head->link->link = head;
    head->link = NULL;
    return res;
}

void  insertATend(int val,NODE* &head){
    NODE* n=new NODE(val);
    if(head==NULL){
        head=n;
        return;
    }
    NODE*temp=head;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link=n;
    return;
}
void insertAThead(int num,NODE* &head){
    NODE*n=new NODE(num);
    NODE*temp=head;
    head =  n;
    head->link=temp;
}
/*void insertATend(int val,NODE* &head){
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
}*/

/*void  display(NODE * &head){
    NODE* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    return ;
}*/
void display(NODE* &head){
    NODE* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->link;
    }
}

int main(){

    NODE* head = NULL;
    int arr[]={2,4,6,8,10,12};
    for(int i=0;i<6;i++){
        insertATend(arr[i],head);
    }
    display(head);
    cout<<endl;
    insertAThead(13,head);
    insertAThead(14,head);
    insertAThead(15,head);
    display(head);
    NODE* dhurr=NODEMANIPULATION(head);
    display(dhurr);
    /*  NODE*nusta = reverseLIST(head);
    cout<<endl;
    display(nusta);
    cout<<endl;  */
    return 0;
}