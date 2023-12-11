#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        this->next= NULL;
    }
};
void printNodes(Node* &head){
    Node* temp =head;
    while (temp!=NULL)
    {
        cout<<temp ->data<<" ";
        temp =temp->next;
    }
    cout<<endl;
    
}
void insertAtEnd(Node* &head, Node* &tail , int data){
    Node* temp = new Node(data);
    if(head == NULL){
        head = temp;
        tail= temp;
    }
    else{
        tail->next= temp;
    }
        tail = temp;
}
Node* recursiveReverseLL ( Node* &prev, Node* & curr){
    if(curr == NULL){
        return prev;
    }
    Node* forward = curr->next;
    curr->next = prev;
    recursiveReverseLL(curr, forward);
}
Node* loopReverseLL(Node* &head){
    Node* prev = NULL;
    Node* curr = head;


    while(curr!=NULL){
        Node* forward = curr->next;
        curr->next= prev;
        prev = curr;
        curr = forward;

    }
    return prev;

}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    Node* prev = NULL;
    insertAtEnd(head, tail,12); 
    insertAtEnd(head, tail,13); 
    insertAtEnd(head, tail,14); 
    insertAtEnd(head, tail,15); 
    insertAtEnd(head, tail,16); 
    insertAtEnd(head, tail,17); 
    insertAtEnd(head, tail,18); 
    insertAtEnd(head, tail,19); 
    insertAtEnd(head, tail,20); 
    printNodes(head);
    Node* curr = head;
    // head = recursiveReverseLL(prev,curr);
    head = loopReverseLL(head);
    printNodes(head);
    return 0;
}