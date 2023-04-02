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

Node* buildTree(Node* root){
    cout << "Enter data :" << "\n";
    int data;
    cin >> data;
    root = new Node(data);

    if(data == -1){
        return NULL;
    }
    cout << "Enter the data for left " << data << "\n";
    root->left = buildTree(root->left);
    cout << "Enter the data for right " << data << "\n";
    root->right = buildTree(root->right);
    return root;
}

void countLeafNode(Node* root , int &count){
    if(root == NULL){
        return ;
    }
    countLeafNode(root->left,count);
    if(root->left == NULL && root->right == NULL){
        count++;
    }
    countLeafNode(root->right ,count);
}

int main ()
{
    Node* root = buildTree(root);
    int count = 0;
    countLeafNode(root,count);
    cout << "Number of Leaf Nodes " << count << "\n";
    return 0;
}