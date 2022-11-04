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

bool SEARCH(NODE* &head,int key){
    NODE* temp=head;
    while(temp->link!=NULL){
        if(temp->data==key){
            return true;
        }
        temp=temp->link;
    }
    return false;

}

void DELETEHEAD(NODE* &head){
    NODE*TODLT=head;
    head=head->link;
    delete TODLT;
}
void deletion(NODE* &head,int val){
    NODE*temp=head;
    while(temp->link->data!=val){
        temp=temp->link;
    }
    NODE*todelete=temp->link;
    temp->link=temp->link->link;
    delete todelete;
}

void INSERTatHEAD(NODE* &head,int val){
    NODE*n=new NODE(val);
    n->link=head;
    head=n;

}

void INSERTatTAIL(NODE* &head,int val){
    NODE* n=new NODE(val);
    if(head==NULL){
        head=n;
        return;
    }

    NODE*temp=head;
    while(temp->link!=NULL){
        temp=temp->link;
    }
    temp->link = n;


}

void display(NODE* head){
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

NODE* kAPPEND(NODE* &head,int k){
    NODE* NEWhead;
    NODE* NEWtail;
    NODE* tail=head;
    int l=length(head);
    int count=1;
    while(tail->link!=NULL){
        if(count==(l-k)){
            NEWtail=tail;
        }
        if(count==(l-k+1)){
            NEWhead=tail;
        }
        count++;
        tail=tail->link;
    }
    NEWtail->link=NULL;
    tail->link=head;

    return NEWhead;


}



int main(){
    NODE* head=NULL;
    INSERTatTAIL(head,0);
    INSERTatTAIL(head,1);
    INSERTatTAIL(head,2);
    INSERTatTAIL(head,3);
    INSERTatTAIL(head,4);
    display(head);
    //cout<<endl;
    //INSERTatHEAD(head,14);
    //INSERTatHEAD(head,5);
    //deletion(head,13);
    //DELETEHEAD(head);
    //display(head);
    //cout<<SEARCH(head,12)<<endl;
    int l=length(head);
    cout<<l<<endl;
    NODE* NEWheaddd= kAPPEND(head,2);
    display(NEWheaddd);
    return 0;

}
