#include<iostream>
#include<stack>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        this->data = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* buildTree(){
    cout << "Enter data " << "\n";
    int data;
    cin >>data;

    Node* root = new Node(data);

    if(data == -1){
        return NULL;
    }
    cout << "Enter the data for the left " << data << "\n";
    root->left = buildTree();
    cout << "Enter the data for the right " << data << "\n";
    root->right = buildTree();
    return root;

}

void printPreOrderIterative(Node* root){
    stack<Node*> s;
    s.push(root);
    while(!s.empty()){
        Node* temp = s.top();
        s.pop();

        cout << temp->data << " ";
        if(temp->right){
            s.push(temp->right);
        }
        if(temp->left){
            s.push(temp->left);
        }
    }
}

void printPreOrder(Node* root){
    if(root == NULL){
        return ;
    }
    cout << root->data << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

int main ()
{
    // input data -> 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1 
    Node* root = buildTree();
    cout << "Traversing Through Recursion " << "\n";
    printPreOrder(root);   
    cout << "\nTraversing Through Iteration " << "\n";
    printPreOrderIterative(root);
    return 0;
}