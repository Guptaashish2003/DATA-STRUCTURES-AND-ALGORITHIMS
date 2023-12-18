#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    Node(int data) {
        this->data = data;
        next = NULL;
    }
};
void printNodes(Node* &head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int findLen(Node* head) {
    int len = 0;
    Node* temp = head;
    while (temp != NULL) {
        len++;
        temp = temp->next;
    }
    return len;
}
Node* reverseKNode(Node* &head,int k){
    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return NULL;
    }
    int len = findLen(head);
    if(k>len){
        // cout<<"enter the valid value of k PS:memory shortage"<<endl;
        return head;
    }
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;
    int count = 0;
    while (count<k)
    {
        forward = curr->next;
        curr->next= prev;
        prev = curr;
        curr = forward;
        count++;
    }
    if(forward!= NULL){
       head->next=  reverseKNode(forward, k);
    }
    return prev;
    


    
}
void insertAtEnd(Node* &head, Node* &tail, int data)
{
    Node *temp = new Node(data);
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
int main() {
    Node* head = NULL;
    Node* tail = NULL;
     insertAtEnd(head, tail, 11);
    insertAtEnd(head, tail, 12);
    insertAtEnd(head, tail, 13);
    insertAtEnd(head, tail, 14);
    insertAtEnd(head, tail, 15);
    insertAtEnd(head, tail, 16);
    insertAtEnd(head, tail, 17);
    insertAtEnd(head, tail, 18);
    insertAtEnd(head, tail, 19);

    printNodes(head);
    head =  reverseKNode(head,8);
    printNodes(head);
    
    return 0;
}