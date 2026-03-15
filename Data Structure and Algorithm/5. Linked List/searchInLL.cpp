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
Node* searchInLL(Node* head,int key){
    Node* temp=head;
    while(temp!=NULL){
        if(temp->data==key) return temp;
        temp=temp->next;
    }
    return NULL;
}
int main(){
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    int key=20;
    Node* result = searchInLL(head,key);
    if(result!=NULL){
        cout<<"Element found in the linked list.";
    }else{
        cout<<"Element not found in the linked list.";
    }
    return 0;
}