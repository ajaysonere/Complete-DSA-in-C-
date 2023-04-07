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
        root = new Node(data);
        return root;
    }

    if(data > root->data){
        root->right = BuildTree(root->right , data);
    }else{
        root->left = BuildTree(root->left , data);
    }
    return root;
}

Node* takeInput(){
    cout << "Enter BST \n";
    int data;
    cin >> data;
    Node* root = NULL;
    
    while(data != -1){
        root = BuildTree(root , data);
        cin >> data;
    }
    return root;
}

void printBST(Node* root){
    if(root == NULL){
        return ;
    }
    cout << root->data << " ";
    printBST(root->left);
    printBST(root->right);
}

bool searchInBSTUsingRec(Node* root , int key){
    if(root == NULL){
        return false;
    }
    if(root->data == key){
        return true;
    }
    if(key > root->data){
        return searchInBSTUsingRec(root->right ,key);
    }else{
        return searchInBSTUsingRec(root->left , key);
    }
}

bool searchInBSTUsingIterative(Node* root , int key){
    if(root->data == key){
        return false;
    }
    while(root != NULL){
        if(key == root->data)
            return true;
        if(root == NULL)
           return false;
        if(key > root->data)
           root = root->right;
        else
           root = root->left;
    }
}

int main ()
{
   // input format -> 10 8 21 7 27 5 4 3 -1
    Node* root = takeInput();
    cout << "BST is " << "\n";
    printBST(root);
    cout << "\nEnter the key \n";
    int key;
    cin >> key;
    if (searchInBSTUsingIterative(root, key))
    {
        cout << "Key is present " << "\n";
    }
    else
    {
        cout <<"Key is not present " << "\n";
    }
    return 0;
}