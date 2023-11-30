#include <iostream>
using namespace std;
class ListNode{
    public:
    int data;
    ListNode* prev;
    ListNode* next;
    ListNode(){
        this->data=0;
        this->prev= NULL;
        this->next = NULL;

    }
    ListNode(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};

// temp complexity = o(n)
void printNodes(ListNode* &head){
    ListNode* temp= head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
// temp complexity = o(n)
int listLength(ListNode* &head){
    int len = 0;
    ListNode* temp =head;
    while(temp!= NULL){
        temp=temp->next;
        len++;
    }
    return len;
}
void insertAtHead(ListNode* &head,ListNode* &tail,int data){
    ListNode* temp = new ListNode(data);
if(head == NULL){
    head = temp;
    tail= temp;
    
}   else{
    temp->next= head;
    head->prev= temp;
    head = temp; 
} 

    temp = head;

}


int main(){

    ListNode* first = new ListNode(10);
    ListNode* second = new ListNode(20);
    ListNode* third = new ListNode(30);
    ListNode* head = first;
    ListNode* tail = third;

    first->next = second;
    second->prev= first;


    second->next= third;
    third->prev=  second;

    printNodes(first);
    insertAtHead(head,tail,19);
    insertAtHead(head,tail,19);
    insertAtHead(head,tail,19);
    insertAtHead(head,tail,19);
    printNodes(head);
    return 0;    

}