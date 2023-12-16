// find middle node of a given linKlist

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
void insertAtEnd(Node *&head, Node *&tail, int data)
{
    Node* temp = new Node(data);
    if (tail == NULL)
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
int findLen(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}
Node *getMiddLL(Node *&head)
{
    int length = findLen(head);
    Node *fastforw = head->next;
    Node *forw = head;
    while (forw != NULL && fastforw != NULL)
    {

        fastforw = fastforw->next;
        if (fastforw != NULL)
        {
            fastforw = fastforw->next;
            forw = forw->next;
        }
    }

    return forw;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    insertAtEnd(head, tail, 11);
    insertAtEnd(head, tail, 12);
    // insertAtEnd(head, tail, 13);
    insertAtEnd(head, tail, 14);
    insertAtEnd(head, tail, 15);
    insertAtEnd(head, tail, 16);
    insertAtEnd(head, tail, 17);
    insertAtEnd(head, tail, 18);
    insertAtEnd(head, tail, 19);
    printNodes(head);
    cout << "Middle of given linKlist is =  " << getMiddLL(head)->data << endl;
    return 0;
}