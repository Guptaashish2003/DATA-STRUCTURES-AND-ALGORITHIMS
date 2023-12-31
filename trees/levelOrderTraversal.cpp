#include<iostream>
#include<queue>
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
void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();
        if(temp == NULL){
            cout<<endl;
            if(!q.empty()) q.push(NULL);
        }
        else{
            cout<< temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
        

}
int main() {
     Node * root = NULL;
    root = buildTree(root);
    cout<<"printing the tree "<<endl;
    levelOrderTraversal(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    

    return 0;
}