#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *Next;

    Node(int data)
    {
        // cout << "constructor is called" << endl;
        this->data = data;
        this->Next = NULL;
    }
};

void insertData(Node* &head, int data)
{
    Node *temp = new Node(data);
    // cout<< temp->data<<" :::  "<<temp->Next<<endl;
    head->Next = temp;

    head = temp;
}
void printNodes(Node* &head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->Next;
    }
    cout << endl;
}

int main()
{
    Node *node = new Node(12);

    Node *head = node;
    Node *starting = node;
    insertData(head, 132);
    insertData(head, 1763762);
    insertData(head, 13762);
    insertData(head, 17632);
    insertData(head, 13276);
    printNodes(starting);
}