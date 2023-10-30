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
    void insertFromEnd(Node* &head, int data){
    Node* temp = new Node(data); // Create a new node with the given data.
    head->next = temp; // Point the next pointer of the current last node to the new node.
    head = temp; // Update the head pointer to the new node, making it the new last node.
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
    Node *node = new Node(12);

    Node *head = node;
    Node *starting = node;
    insertFromEnd(head, 132);
    insertFromEnd(head, 1763762);
    insertFromEnd(head, 13762);
    insertFromEnd(head, 17632);
    insertFromEnd(head, 13276);
    printNodes(starting);
}