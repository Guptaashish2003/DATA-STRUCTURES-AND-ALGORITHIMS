#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node* next;
    Node* prev;
    Node(){ // why here creating a blank construtor => because of error handling to assign data =0 rather than bin values
        this->data=0;
        this->next= NULL;
        this->prev=NULL;
    }
    Node(int data){
        this->data= data;
        this->next=  NULL;
        this->prev=NULL;
    }
};

void printNodes(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}
void insertAtTail(Node* &head,Node* &tail,int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }else{
        tail->next= newNode;
        newNode->prev = tail;
        tail = newNode;
        cout<<newNode->prev->data<<endl;


    }
    
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtTail(head,tail,12);
    insertAtTail(head,tail,13);
    insertAtTail(head,tail,14);
    insertAtTail(head,tail,15);
    insertAtTail(head,tail,16);
    insertAtTail(head,tail,17);
    printNodes(head);
    

    return 0;
}