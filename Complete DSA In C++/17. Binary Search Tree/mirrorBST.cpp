#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *BuildTree(Node *root, int data)
{

    if (root == NULL){
        return new Node(data);
    }

    if (data > root->data){
        root->right = BuildTree(root->right, data);
    }else{
        root->left = BuildTree(root->left, data);
    }
}

void printInOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}
Node* mirrorOfBST(Node* root){
    if(root == NULL){
        return NULL;
    }
    mirrorOfBST(root->left);
    mirrorOfBST(root->right);
    Node* temp = root->left;
    root->left = root->right;
    root->right = temp;
    return root;
}

int main()
{
    Node *root = NULL;
    int arr[] = {10, 8, 21, 7, 27, 5, 4, 3};
    for (auto x : arr)
    {
        root = BuildTree(root, x);
    }
    cout << "In Order in BST " << "\n";
    printInOrder(root);
    cout << "\n Mirror of BST " << "\n";
    Node* temp = mirrorOfBST(root);
    printInOrder(root);
    return 0;
}