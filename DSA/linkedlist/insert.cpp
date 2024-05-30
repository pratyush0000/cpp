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
    insertAtHead(head, 2);
    display(head);
    insertAtHead(head,8);
    display(head);
    insertAtTail(head,9);
    display(head);

    return 0;
}