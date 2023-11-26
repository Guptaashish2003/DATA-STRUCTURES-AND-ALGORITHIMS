#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node(){
        cout<<"Deleting a Node with data = "<<this->data<<endl;
        delete next;
    }
};
void insertAtTail(Node* &head, Node* &tail, int data){
    Node* temp = new Node(data);
    if(head == NULL){
        head = temp;
        tail=temp;
    }
    else{

    tail->next= temp;
    }
    tail = temp;
}
int findLen(Node* &head){
    int len=0;
    Node* temp = head;
    while (temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    return len;
    
    
}
void printNodes(Node* &head){
    Node* temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
}
void deleteNode(Node* &head,Node* & tail ,int position){
        Node* prev = head;
    if(head == NULL){
        cout<<" cannot delete empty list "<<endl;
        return;
    }
    if(position==1){
        Node* temp = head;
        head = head->next;
        temp->next= NULL;
        delete temp;
        return;
    }
    int len = findLen(head);
    if(len == position){
        int i = 1;
        while (i<position-1){
            prev = prev->next;
            i++;
        }
        prev->next= NULL;
        Node* temp = tail;      
        delete temp;
    }
    if(position<len){
        int i= 1;
        while(i<position-1){
            prev=prev->next;
            i++;
        }
       Node* current = prev->next;
       prev->next = current->next;
        current->next= NULL;
        delete current;

    }
    else{
        cout<<"at position "<<position<<" node does not exist "<<endl;
    }

}

int main()
{

    Node* head = NULL;
    Node* tail = NULL;

    insertAtTail(head, tail, 12);
    insertAtTail(head, tail, 132);
    insertAtTail(head, tail, 124);
    insertAtTail(head, tail, 125);
    insertAtTail(head, tail, 126);
    deleteNode(head,tail,3);
    printNodes(head);


    return 0;
}