#include<iostream>
#include<stack>
#include<vector>
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

Node* buildTree(){
    int data;
    cin >> data;

    Node* root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter the data for Left Node " << data << "\n";
    root->left = buildTree();
    cout << "Entre the data for right Node " << data << "\n";
    root->right = buildTree();
    return root;
}

void printPostOrder(Node* root){
    if(root == NULL){
        return ;
    }
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout << root->data << " ";
}

// This is solution using the 2 stack 
void printPostOrderIterative(Node* root){
    if(root == NULL){
        return;
    }
    stack<Node* > s1,s2;
    s1.push(root);
    while(!s1.empty()){
        root = s1.top();
        s1.pop();
        s2.push(root);
        if(root->left){
            s1.push(root->left);
        }
        if(root->right){
            s1.push(root->right);
        }
    }
    while(!s2.empty()){
        cerr << s2.top()->data << " ";
        s2.pop();
    }
}


void printPostOrderUsingOneStack(Node* root){
    if(root == NULL){
        return ;
    }
    stack<Node*> s;
    Node* curr = root;
    while(curr != NULL || !s.empty()){
        if(curr != NULL){
            s.push(curr);
            curr = curr->left;
        }else{
            root = s.top()->right;
            if(root == NULL){
                root = s.top();
                s.pop();
                cout << root->data << " ";
                while(!s.empty() && root == s.top()->right){
                    root = s.top();
                    s.pop();
                    cout<< root->data<< " ";
                }
            }else{
                curr = root;
            }
        }  
    }
}


int main ()
{
    Node* root = buildTree();
    cout << "Post Order Traversal Using The Recursion " << "\n";
    printPostOrder(root);
    cout << "\nPost Order Traversal Using The Iteration Using 2 Stack " << "\n";
    printPostOrderIterative(root);
    cout << "\nPost Order Traversal Using the Iteration Using 1 Stack  "<< "\n";
    printPostOrderUsingOneStack(root);

    return 0;
}