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
bool checkLoopInLL(Node* &head){
    if(head==NULL){
        cout<<"link list is empty"<<endl;
        return false;
    }
    Node* slow = head;
    Node* fast = head;
    while (fast!=NULL)
    {
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
            slow = slow->next;
        }
        if(slow == fast){
            return true;
        }
    }
    

}



int main() {
    Node* head = new Node(10);
    Node* first = head;
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* fourth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    Node* seventh= new Node(70);
    Node* eight = new Node(80);
    Node* ninth = new Node(90);
    Node* tenth = new Node(100);
    first->next= second;
    second->next= third;
    third->next = fourth;
    fourth->next= fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eight;
    eight->next= ninth;
    ninth->next= tenth;
    tenth->next= NULL;
    cout<< "loop is present : "<<checkLoopInLL(head);
    // printNodes(head);
    return 0;
}