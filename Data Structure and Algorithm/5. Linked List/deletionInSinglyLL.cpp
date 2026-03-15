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

Node* deleteHead(Node* head){
    return head->next;
}

Node* deleteTail(Node* head){
    if(head==nullptr || head->next==nullptr) return nullptr;
    Node* temp=head;
    while(temp->next->next){
        temp=temp->next;
    }
    temp->next=nullptr;
    return head;
}

Node* deleteAtPosition(Node* head,int position){
    if(position==1) return deleteHead(head);
    if(position==0) return head;
    Node* temp = head;
    int cnt = 1;
    while(cnt<position-1 && temp!=NULL){
        temp=temp->next;
        cnt++;
    }
    if(temp==NULL || temp->next==NULL) return head;
    Node* nodeToDelete = temp->next;
    temp->next=temp->next->next;
    delete nodeToDelete;
    return head;
}

Node* deleteByValue(Node* head,int value){
    if(head==nullptr) return head;
    if(head->data==value) return deleteHead(head);
    Node* temp = head;
    while(temp->next!=nullptr && temp->next->data!=value){
        temp=temp->next;
    }
    if(temp->next==nullptr) return head;
    Node* delteNode = temp->next;
    temp->next=temp->next->next;
    delete delteNode;
    return head;
}

int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head=deleteByValue(head,10);
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}