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

bool symmetricHelp(Node* left , Node* right){
    if(left == NULL || right == NULL){
         return (left == right);
    }

    if(left->data != right->data){
        return false;
    }

    return symmetricHelp(left->left , right->right )&& symmetricHelp(left->right , right->left);
}

bool isSymmetric(Node* root){
     return root == NULL || symmetricHelp(root->left , root->right);
}

int main ()
{

    // input -> 1 2 3 -1 -1 4 -1 -1 2 4  -1 -1 3 -1 -1
    Node* root = BuildTree();
    cout << "Pre Order Traversal " << "\n";
    printTree(root);
    isSymmetric(root)?cout << "\nTree is Symmetric \n" : cout << "\nTree is not Symmetric \n";
    return 0;
}