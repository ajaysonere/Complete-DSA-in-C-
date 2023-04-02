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


int main ()
{
    Node* root = buildTree();
    preOrder(root);
    return 0;
}