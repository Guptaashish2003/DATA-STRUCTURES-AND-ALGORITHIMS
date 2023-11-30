#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data){
        this->data= data;
        this->next= NULL;
        this->prev=NULL;
    }   
    ~Node(){
        cout<<"Deleting a Node with data = "<<this->data<<endl;
        delete next;
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

void printNodes(Node *&head){
    Node* temp  = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
    }
    cout<<endl;
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
void deleteNode(Node* &head,Node* &tail,int pos){
    int i=1, len = GetLLlen(head);
     Node* curr= head;
        
    while (i<pos)
    {
        curr=curr->next;
        i++;       
    }
    if(pos==1){
        head = curr->next;
        curr->next= NULL;        
    }
        curr->next= curr->next->next;
        curr->next->next = curr->prev->prev;

    
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtTail(head, tail, 12);
    insertAtTail(head, tail, 13);
    insertAtTail(head, tail, 14);
    insertAtTail(head, tail, 15);
    insertAtTail(head, tail, 16);
    insertAtTail(head, tail, 17);
    printNodes(head);
    deleteNode(head,tail,3);
    printNodes(head);

    return 0;
}