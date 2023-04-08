#include <iostream>
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


int main()
{
    Node *root = takingInput();
    cout << "INORDER OF BST "<< "\n";
    printInOrder(root);
    if (toSumInBST(root, target)){
        cout << "Sum is Found in BST " << "\n";
    }else{
        cout << "Sum is not Found In BST " << "\n";
    }
    return 0;
}