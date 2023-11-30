#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node()
    {
        this->data = 0;
        this->next = NULL;
        this->prev = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
int GetLLlen(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void printNodes(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtTail(Node *&head, Node *&tail, int data)
{
    Node *newNode = new Node(data);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}
void insertAtPosition(Node *&head, Node *&tail, int data, int pos)
{
    int i = 1, len = GetLLlen(head);
    Node *temp = new Node(data);
    Node *currN = head;
    Node *prevN = head;
    while (i < pos-1)
    {
        prevN = prevN->next;
        i++;
    }
    if (pos >= len)
    {
        insertAtTail(head, tail, data);
        return;
    }
    if (pos == 1)
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    currN = prevN->next;
    temp->prev = prevN;
    temp->next = currN;
    currN->prev = temp;
    prevN->next = temp;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    insertAtTail(head, tail, 12);
    insertAtTail(head, tail, 13);
    insertAtTail(head, tail, 14);
    insertAtTail(head, tail, 15);
    insertAtTail(head, tail, 16);
    insertAtTail(head, tail, 17);
    insertAtPosition(head, tail, 122, 8);
    // insertAtPosition(head,tail,122,5);
    printNodes(head);

    return 0;
}