#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

Node* insertAtHead(Node* head,int value){
    Node* newNode = new Node(value);
    newNode->next=head;
    head=newNode;
    return head;
}

Node* insertAtTrail(Node* head,int value){
    if(head==NULL){
        return new Node(value);
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    Node* newNode = new Node(value);
    temp->next=newNode;
    return head;
}

Node* insertAtPosition(Node* head,int value,int position){
    if(position==1) return insertAtHead(head,value);
    if(position==0) return head;
    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1 && temp!=NULL){
        temp=temp->next;
        cnt++;
    }
    Node* newNode = new Node(value);
    newNode->next=temp->next;
    temp->next=newNode;
    return head;
}

Node* insertAfterValue(Node* head,int value,int afterValue){
    if(head==NULL) return head;
    if(head->data==afterValue) return insertAtHead(head,value);
    Node* temp = head;
    while(temp!=NULL && temp->data!=afterValue){
        temp=temp->next;
    }
    if(temp==NULL) return head;
    Node* newNode = new Node(value);
    newNode->next=temp->next;
    temp->next=newNode;
    return head;
}

int main(){
    Node* head=NULL;
    head=insertAtHead(head,30);
    head=insertAtHead(head,20);
    head=insertAtHead(head,10);
    head=insertAtPosition(head,25,1);
    head=insertAtTrail(head,40);
    head=insertAfterValue(head,35,20);
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}
