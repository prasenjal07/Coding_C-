#include<iostream>
using namespace std;

class DOUBLENODE{
    public:
       int data;
       DOUBLENODE* linkfrwd;
       DOUBLENODE* linkbckwrd;



       DOUBLENODE(int val){
        data=val;
        linkbckwrd=NULL;
        linkfrwd=NULL;
       }
};

void DELETEatHEAD(DOUBLENODE* &head){
    DOUBLENODE* todelete=head;
    head=head->linkbckwrd;
    head->linkbckwrd=NULL;
    delete todelete;

}

void DELETION(DOUBLENODE* &head,int pos){
     if(pos==1){
        DELETEatHEAD(head);
        return;
    }
    DOUBLENODE*temp=head;
    int count=1;
    while(temp!=NULL && count!=pos){
        temp=temp->linkfrwd;
        count++;
    }
    if(temp->linkbckwrd!=NULL){
    temp->linkbckwrd->linkfrwd=temp->linkfrwd;
    }
    if(temp->linkfrwd!=NULL){
    temp->linkfrwd->linkbckwrd=temp->linkbckwrd;
    }
    
    delete temp;
}

void INSERTatHEAD(DOUBLENODE* &head,int val){
    DOUBLENODE* n =new DOUBLENODE(val);
    if(head!=NULL){
    head->linkbckwrd=n;
    }
    n->linkfrwd=head;
    n->linkbckwrd=NULL;

    head=n;

    }


void INSERTatTAIL(DOUBLENODE* &head,int val){
    DOUBLENODE* n=new DOUBLENODE(val);
    if(head==NULL){
        head=n;
        n->linkbckwrd=NULL;
        n->linkfrwd=NULL;
        return;
    }


    DOUBLENODE*temp=head;
    while(temp->linkfrwd!=NULL){
        temp=temp->linkfrwd;
    }
    temp->linkfrwd=n;
    n->linkbckwrd=temp;
}

void display(DOUBLENODE* &head){
    DOUBLENODE* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->linkfrwd;
    }
    cout<<endl;
}

int main(){
    DOUBLENODE* head=NULL;
    INSERTatTAIL(head,2);
    INSERTatTAIL(head,4);
    INSERTatTAIL(head,6);
    INSERTatTAIL(head,8);
    INSERTatTAIL(head,10);
    INSERTatTAIL(head,12);
    INSERTatHEAD(head,5);
    DELETION(head,1);
    display(head);
    return 0;
}
