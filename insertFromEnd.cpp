#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this ->data =data;
        this->next = NULL;
    }
};
    void insertFromEnd(Node* &head,Node* &tail, int data){
    Node* temp = new Node(data); // Create a new node with the given data.
    if(tail==NULL){
        tail=temp;
        head=temp;
    }
    else{
    tail->next = temp; // Point the next pointer of the current last node to the new node.
    }
    tail = temp; // Update the head pointer to the new node, making it the new last node.
}

   void printNodes(Node* &head){
    Node* temp =head;
    while (temp!=NULL)
    {
        cout<<temp ->data<<" ";
        temp =temp->next;
    }
    cout<<endl;
    
}

int main()
{

    Node* head = NULL;
    Node* tail = NULL;
    insertFromEnd(head,tail, 12);
    insertFromEnd(head,tail, 132);
    insertFromEnd(head,tail, 1763762);
    insertFromEnd(head,tail, 13762);
    insertFromEnd(head,tail, 17632);
    insertFromEnd(head,tail, 13276);
    printNodes(head);
}