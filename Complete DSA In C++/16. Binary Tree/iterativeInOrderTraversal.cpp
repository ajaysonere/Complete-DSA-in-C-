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

Node* buildTree(){
    int data;
    cin >>data;

    Node* root = new Node(data);

    if(data == -1){
        return NULL;
    }
    cout << "Enter  the data for the left Node of " << data << "\n";
    root->left = buildTree();
    cout << "Enter the data for the right Node of " << data  << "\n";
    root->right = buildTree();
    return root;
}

// printing the nodes using the recursion
void printInOrder(Node* root){
    if(root == NULL){
        return ;
    }
    printInOrder(root->left);
    cout<< root->data << " ";
    printInOrder(root->right);
}

void printInOrderIterative(Node* root){
    if(root == NULL){
        return ;
    }
    stack<Node*> st;
    Node* temp = root;
    while(true){
        if(temp != NULL){
            st.push(temp);
            temp = temp->left;
        }else{
            if(st.empty()){
                break;
            }
            temp = st.top();
            st.pop();
            cout << temp->data << " ";
            temp = temp->right;
        }
    }
}

int main ()
{
    Node* root = buildTree();
    cout << "InOrder Traversal " << "\n";
    printInOrder(root);
    cout << "\nInOrder Traversal Iterative \n";
    printInOrderIterative(root);
    return 0;
}