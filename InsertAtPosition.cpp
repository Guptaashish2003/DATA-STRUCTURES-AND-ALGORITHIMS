#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtPosition(Node *&head, Node *tail, int position, int data)
{
    Node* addNode = new Node(data);
    if(head==NULL){
        head = addNode;
        tail = addNode;
    }
    int i = 0;
    Node *temp = head;
    while (i != position)
    {
        if (i != position)
        {
            i++;
        }
        temp = temp->next;
    }
    addNode->next=temp->next;
    temp->next=addNode;
    cout << temp->data << endl;
}
void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *temp = new Node(data);
    if (head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        tail->next = temp;
    }
    tail = temp;
}
void printNodes(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtTail(head, tail, 12);
    insertAtTail(head, tail, 132);
    insertAtTail(head, tail, 124);
    insertAtTail(head, tail, 125);
    insertAtTail(head, tail, 126);
    insertAtPosition(head, tail, 3, 23);
    insertAtPosition(head, tail, 3, 2113);
    insertAtPosition(head, tail, 0, 1123);
    printNodes(head);

    return 0;
}