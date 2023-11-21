#include <iostream>

using namespace std;
class Node
{
    public:
    int data;
    Node* next;
    Node(int data){  //constructor
    cout<<"constructor is called"<<endl;
        this ->data= data;
        this ->next = NULL;
    }
};

void insertATHead (Node* &head ,int data){
    Node* temp = new Node(data);
    temp ->next = head;
    head = temp;
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
     
    Node* head = new Node(123);
    insertATHead(head, 12);
    insertATHead(head, 11112);
    insertATHead(head, 1211);
    insertATHead(head, 1243);
    printNodes(head);
    
  
}