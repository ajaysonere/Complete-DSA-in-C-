#include<iostream>
#include<stack>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* BuildTree(){
    int data;
    cin>>data;
    Node* root  = new Node(data);

    if(data == -1){
        return NULL;
    }
    cout << "Enter the data for left " << data << "\n";
    root->left = BuildTree();
    cout << "Enter the data for right " << data << "\n";
    root->right = BuildTree();
    return root;
}

void printInOrder(Node* root){
    if(root == NULL){
        return;
    }
    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}

void printInOrderIterative(Node* root){
    if(root == NULL){
        return ;
    }
    stack<Node*> s;
    while(true){
        if(root != NULL){
            s.push(root);
            root = root->left;
        }else{
            if(s.empty()){
                break;
            }
            root = s.top();
            s.pop();
            cout << root->data << " ";
            root = root->right;
        }
    }
}

int main ()
{
   // input data - > 10 11 12 14 -1 -1 -1 13 -1 -1 9 8 -1 -1 6 -1 -1
    Node* root = BuildTree();
    cout << "In Order Traversal Using recursion " << "\n";
    printInOrder(root);
    cout << "\nIn Order Traversal Using Iterative " << "\n";
    printInOrderIterative(root);
    return 0;
}