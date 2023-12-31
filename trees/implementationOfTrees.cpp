#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
Node* buildTree(Node* root){
    cout <<"enter data = ";
    int data;
    cin>> data;
    root = new Node(data);
    if(data == -1) return NULL;
    cout<<"entering in left side : "<<data<<endl;
    root->left = buildTree(root->left);
    cout<<"enterring in right side : "<<data<<endl;
    root->right = buildTree(root->right);
    return root;
}

int main() {
    Node * root = NULL;
    root = buildTree(root);
    
    return 0;
}