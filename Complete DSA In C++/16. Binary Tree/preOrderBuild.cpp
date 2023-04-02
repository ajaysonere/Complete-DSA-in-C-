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

Node* buildTree(){
    cout <<"Enter data : \n";
    int data;
    cin >> data;

    if(data == -1){
        return NULL;
    }
    Node* root = new Node(data);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void preOrder(Node* root){
    if(root == NULL){
        return ;
    }
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int leftSubtreeHeight = height(root->left);
    int rightSubtreeHeight = height(root->right);
    return 1+max(leftSubtreeHeight , rightSubtreeHeight);
}

int main ()
{
    Node* root = buildTree();
    preOrder(root);
    cout << "\n";
    cout <<"Height of tree is " << height(root) << "\n";
    return 0;
}