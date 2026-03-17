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
int length(Node* head){
    int count=0;
    while(head!=NULL){
        count++;
        head=head->next;
    }
    return count;
}
Node* intersection(Node* head1,Node* head2){
    int l1=length(head1);
    int l2=length(head2);
    int d=abs(l1-l2);
    Node* ptr1;
    Node* ptr2;
    if(l1>l2){
        ptr1=head1;
        ptr2=head2;
    }
    else{
        ptr1=head2;
        ptr2=head1;
    }
    for(int i=0;i<d;i++){
        ptr1=ptr1->next;
    }
    while(ptr1!=NULL && ptr2!=NULL){
        if(ptr1==ptr2){
            return ptr1;
        }
        ptr1=ptr1->next;
        ptr2=ptr2->next;
    }
    return NULL;
}
int main(){
    Node* head1=new Node(1);
    head1->next=new Node(2);
    head1->next->next=new Node(3);
    head1->next->next->next=new Node(4);
    head1->next->next->next->next=new Node(5);
    Node* head2=new Node(6);
    head2->next=head1->next->next;
    Node* ans=intersection(head1,head2);
    if(ans!=NULL){
        cout<<"Intersection at node with data: "<<ans->data<<endl;
    }
    else{
        cout<<"No intersection found."<<endl;
    }
    return 0;
}