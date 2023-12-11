#include <iostream>
using namespace std;

class ListNode {
public:
    int value;
    ListNode* next;

    ListNode(int val) : value(val), next(nullptr) {}
};
void printNodes(ListNode *head)
{
    ListNode *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
ListNode* findModularNode(ListNode* head, int k) {
    if (!head || k <= 0) {
        return nullptr;
    }

    int n = 0;
    ListNode* current = head;

    // Count the number of nodes in the linked list
    while (current) {
        n++;
        current = current->next;
    }
    cout<<n<<endl;

    // Calculate the position of the modular node
    int position = n - (n % k);
    cout<<position<<endl;

    // Traverse the list to find the modular node
    current = head;
    cout<<current->value<<"  currenc"<<endl;
    for (int i = 1; i < position ; i++) {
        if (!current) {
            return nullptr; // Handle cases where position is out of bounds
        }
        current = current->next;
    }
    return current;
}

int main() {
    // Example usage:
    // Constructing a sample linked list: 1 -> 2 -> 3 -> ... -> 18 -> 19
    int n,kValue;
    cout<<"the value of n = ";
    cin>>n;
    cout<<"the value of kValue  = ";
    cin>>kValue;

    ListNode* head = new ListNode(1);
    ListNode* current = head;
    for (int i = 2; i <= n; i++) {
        current->next = new ListNode(i);
        current = current->next;
    }

    // int kValue = 3;
    ListNode* modularNode = findModularNode(head, kValue);

    if (modularNode) {
        cout << "The last element from the beginning whose n%k == 0 (where n ="<<n<<" and k="<<kValue<< ") is: " << modularNode->value << endl;
    } else {
        cout << "No modular node found." << endl;
    }
    printNodes(head);

    // Clean up allocated memory
    current = head;
    while (current) {
        ListNode* temp = current;
        current = current->next;
        delete temp;
    }
    // printNodes(current);

    return 0;
}
