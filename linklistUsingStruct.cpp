#include<iostream>
using namespace std;

// Define node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert node at the end of the list
void insert(Node** head, int new_data) {
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = NULL;

    if (*head == NULL) {
        *head = new_node;
        return;
    }
    cout<<"head : "<<head<<"::value:::"<<*head<<endl;

    Node* last = *head;
    cout<<"last : "<<last<<":::::"<<endl;

    while (last->next != NULL) {
        last = last->next;
    }

    cout<<"last ka next "<< last->data<<endl;

    last->next = new_node;
}

// Function to print the linked list
void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
}

int main() {
    Node* head = NULL;

    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    
    printList(head);

    return 0;
}