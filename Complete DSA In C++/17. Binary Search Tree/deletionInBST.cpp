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

Node* BuildTree(Node* root , int data){
    if(root == NULL){
        return new Node(data);
    }
    if(data > root->data){
        root->right = BuildTree(root->right , data);
    }else{
        root->left = BuildTree(root->left , data);
    }
}

Node* takingInput(){
    cout << "Enter BST data " << "\n";
    int data;
    cin >> data;

    Node* root = NULL;
    while(data != -1){
        root = BuildTree(root , data);
        cin >> data;
    }
    return root;
}

void printInOrder(Node* root){
    if(root == NULL){
        return;
    }
    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}

Node* findMin(Node* root){
    if(root->left){
        root = root->left;
    }
    return root;
}

Node* deletionInBST(Node* root ,int key){
    cout << "Inside Deletion \n";
    if(root == NULL){
        return root;
    }
    if(root->data == key){
        // for 0 child
        cout << "matched data \n";
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        // for 1 child
        if(root->left != NULL && root->right == NULL){
            Node* temp = root->left;
            delete root;
            return temp;
        }
        if(root->left == NULL && root->right != NULL){
            Node* temp = root->right;
            delete root;
            return temp;
        }


        // for 2 child
        if(root->left != NULL && root->right != NULL){
            int mini = findMin(root->right)->data;
            root->data = mini;
            root->right = deletionInBST(root->right , mini);
            return root;
        }
    }else if(key > root->data){
        root->right = deletionInBST(root->right , key);
        return root;
    }else{
        root->left = deletionInBST(root->left , key);
        return root;
    }
}

int main ()
{
    Node* root = takingInput();
    cout << "BST is " << "\n";
    printInOrder(root);
    cout << "\nDeletion In BST \n";
    int key;
    cin >> key;
    root = deletionInBST(root , key);
    printInOrder(root);
    return 0;
}