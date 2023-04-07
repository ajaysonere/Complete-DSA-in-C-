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
    if (root == NULL)
    {
        root = new Node(data);
        return root;
    }

    if (data > root->data)
    {
        root->right = BuildTree(root->right, data);
    }
    else
    {
        root->left = BuildTree(root->left, data);
    }
    return root;
}

Node *takeInput(){

    cout << "Enter BST \n";
    int data;
    cin >> data;
    Node *root = NULL;

    while (data != -1)
    {
        root = BuildTree(root, data);
        cin >> data;
    }
    return root;
}

void printBST(Node *root)
{
    if (root == NULL){
        return;
    }

    cout << root->data << " ";
    printBST(root->left);
    printBST(root->right);
}

int minBST(Node* root){
    Node* temp = root;
    while(temp->left != NULL){
        temp = temp->left;
    }
    return temp->data;
}

int maxBST(Node* root){
   Node* temp = root;
   while(temp->right != NULL){
       temp = temp->right;
   }
   return temp->data;
}


int main()
{
    // input format -> 10 8 21 7 27 5 4 3 -1
    Node *root = takeInput();
    cout << "BST is "<< "\n";
    printBST(root);
    cout << "\nMin Node in BST is " << minBST(root) << "\n";
    cout << "Max Node in BST is " << maxBST(root) << "\n";

    return 0;
}