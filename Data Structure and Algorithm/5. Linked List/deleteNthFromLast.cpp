#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=NULL;
    }
};

Node* deleteFromLast(Node* head,int k){
    
    if(head==nullptr) return head;
    if(k==0 || k<0) return head;
    Node* slow=head;
    Node* fast=head;
    for(int i=0;i<k;i++){
        if(fast==NULL){
            return head;
        }
        fast=fast->next;
    }
    if(fast==NULL){
        return head->next;
    }
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next;
    }

    slow->next=slow->next->next;
    return head;
}
int main(){
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);

    int k=5;
    head=deleteFromLast(head,k);
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    return 0;
}