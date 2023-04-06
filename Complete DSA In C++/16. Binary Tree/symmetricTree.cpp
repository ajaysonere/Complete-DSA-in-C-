#include<iostream>
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
    cin >> data;
    Node* root  = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter the data for the Left " << "\n";
    root->left = BuildTree();
    cout << "Entre the data for the Right " << "\n";
    root->right = BuildTree();
    return root;
}

void printTree(Node* root){
    if(root == NULL){
        return ;
    }

    cout << root->data << " ";
    printTree(root->left);
    printTree(root->right);
}

bool isSymmetric(Node* root);{
     return root == NULL || symmetricHelp(root->left , root->right);
}

int main ()
{

    // input -> 1 2 3 -1 -1 4 -1 -1 2 4  -1 -1 3 -1 -1
    Node* root = BuildTree();
    cout << "Pre Order Traversal " << "\n";
    printTree(root);
    isSymmetric(root)?cout << "Tree is Symmetric \n" : cout << "Tree is not Symmetric \n";
    return 0;
}