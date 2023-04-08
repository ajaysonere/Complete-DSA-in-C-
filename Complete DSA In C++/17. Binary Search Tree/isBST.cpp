#include <bits/stdc++.h>
#include <vector>
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

Node *buildTree(Node *root, int data)
{
    if (root == NULL)
    {
        return new Node(data);
    }
    if (data > root->data)
    {
        root->right = buildTree(root->right, data);
    }
    else
    {
        root->left = buildTree(root->left, data);
    }
    return root;
}

Node *takingInput()
{
    cout << "Enter data \n";
    int data;
    cin >> data;

    Node *root = NULL;
    while (data != -1)
    {
        root = buildTree(root, data);
        cin >> data;
    }
    return root;
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


// it will take O(N) time and O(1) space 
bool BSTHelper(Node* root, int minVal , int maxVal){
    if(root == NULL){
        return true;
    }
    if(root->data >= maxVal || root->data <= minVal){
        return false;
    }
    return BSTHelper(root->left , minVal , root->data) && BSTHelper(root->right , root->data , maxVal);
}

bool isBST(Node* root){
    return BSTHelper(root ,INT_MIN,INT_MAX);
}


int main()
{
    Node *root = takingInput();
    cout << "INORDER OF BST "<< "\n";
    printInOrder(root);
    cout << "\n";
    if (isBST(root)){
        cout << "It's valide BST " << "\n";
    }else{
        cout << "IT's Not valide BST " << "\n";
    }

    return 0;
}