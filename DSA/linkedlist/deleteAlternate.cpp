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


void display(node* head){
    node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->value<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}

void deleteAlternateElement(node* &head){
    node* curr = head;
    while(curr!=NULL && curr->next!= NULL){
        node* temp = curr->next;
        curr->next= curr->next->next;
        delete temp;
        curr=curr->next;
    }
}


int main(){
    node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    insertAtTail(head,7);
    insertAtTail(head,8);
    display(head);
    deleteAlternateElement(head);
    display(head);

    return 0;
}