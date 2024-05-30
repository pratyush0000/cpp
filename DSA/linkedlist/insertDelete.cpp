#include<iostream>
using namespace std;

class node{
    public:
    int value;
    node* next;

    node(int data){
        value = data;
        next = NULL;
    }

};

void insertAtHead(node* &head, int val){
    node* new_node = new node(val);
    new_node->next = head;
    head = new_node;
}

void insertAtTail(node* &head, int val){
    node* newnode = new node(val);
    if(head==NULL){
        head=newnode;
        return;
    }
    node* temp = head;
    while (temp->next != NULL)
    {
        temp=temp->next;
    }
    // newnode->next=NULL;
    temp->next=newnode;
}

void insertAtPosition(node* &head, int val, int pos){

    if(pos==0){
        insertAtHead(head,val);
        return;
    }

    node* newn = new node(val);
    node* temp = head;
    int currPos=0;

    while(currPos!=pos-1){
        temp=temp->next;
        currPos++;
    }
    //rn, the tmp pointer is pointing to the postition before it. if it has to be inserted at 5, its pointing to 4.
    newn->next = temp->next;
    temp->next = newn;

}

void updateAtPosition(node* &head, int val, int pos){

    node* temp = head;
    int currpos=0;

    while(currpos!=pos){
        temp=temp->next;
        currpos++;
    }

    temp->value = val;
}

void deleteAtHead(node* &head){
    node* temp = head; //node to be deleted
    head=head->next;
    free(temp);
}

void deleteAtTail(node* &head){
    node* secLast = head;
    while(secLast->next->next!=NULL){
        secLast=secLast->next;
    }
    node* temp = secLast->next;
    secLast->next = NULL;
    free(temp);
}

void deleteAtPosition(node* &head, int pos){
    node* nodeBefore = head;
    int currposi=0;
    while(currposi!=pos-1){
        nodeBefore=nodeBefore->next;
        currposi++;
    }
    node* temp = nodeBefore->next;
    nodeBefore->next=nodeBefore->next->next;
    free(temp);
}


void display(node* head){
    node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->value<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}

int main(){
    node* head = NULL;
    insertAtHead(head, 8);
    display(head);
    insertAtHead(head,2);
    display(head);
    insertAtTail(head,9);
    display(head);
    insertAtPosition(head,6,1);
    display(head);
    insertAtPosition(head,5,1);
    display(head);
    updateAtPosition(head,4,1);
    display(head);
    deleteAtHead(head);
    display(head);
    deleteAtTail(head);
    display(head);
    deleteAtPosition(head,1);
    display(head);

    return 0;
}