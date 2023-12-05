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
        temp = temp->next;
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
    if(head == NULL){
        cout<<"link list is empty"<<endl;
        return;
    }
    if (pos>len)
    {
        cout<<"memory exceeds enter valid position"<<endl;
        return;
    }
    if(head->next==NULL){
        Node* temp = head;
        head = NULL;
        tail= NULL;
        delete temp;
        return;
    }
    if(pos==1){

        Node* temp = head;
        head = head->next;
        head->prev= NULL;
        temp->next=NULL;
        delete temp;
        return;  
    }
    if(pos==len){
        Node* temp = tail;
        tail = tail->prev;
        temp->prev= NULL;
        tail->next= NULL;
        delete temp;
        return;
    }
     Node* left= head;
        
    while (i<pos-1)
    {
        left=left->next;
        i++;       
    }
    Node* curr = left->next;
    Node* right = curr->next;
    left->next= right;
    right->prev = left;
    curr->next=NULL;
    curr->prev= NULL;
    delete curr;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtTail(head, tail, 12);
    insertAtTail(head, tail, 13);
    // cout<<head->data<<endl;
    insertAtTail(head, tail, 14);
    insertAtTail(head, tail, 15);
    insertAtTail(head, tail, 16);
    insertAtTail(head, tail, 17);
    // printNodes(head);
    deleteNode(head,tail,6);
    printNodes(head);

    return 0;
}