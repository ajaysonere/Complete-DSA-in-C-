#include <iostream>
#include<vector>
using namespace std;

class Node{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *BuildTree(Node *root, int data){

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
    if (root == NULL){
        return;
    }
    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}



int main()
{
    Node *root = NULL;
    int arr[] = {10, 8, 21, 7, 27, 5, 4, 3};
    for (auto x : arr)
    {
        root = BuildTree(root, x);
    }
    cout << "In Order in BST "<< "\n";
    printInOrder(root);
    vec
    return 0;
}