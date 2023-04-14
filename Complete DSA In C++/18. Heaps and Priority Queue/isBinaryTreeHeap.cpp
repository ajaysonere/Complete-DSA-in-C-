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

Node* buildTree(Node* root , int data){
    if(root == NULL){
        return new Node(data);
    }
    if(data < root->data){
        root->left = buildTree(root->left , data);
    }else{
        root->right = buildTree(root->right , data);
    }
    return root;
}

Node* takingInput(){
    cout << "Enter Data " << "\n";
    int data;
    cin >> data;
    Node* root = NULL;
    while(data != -1){
        root = buildTree(root , data);
        cin >> data;
    }
    return root;
} 

void print(Node* root){
    if(root == NULL){
        return ;
    }
    print(root->left);
    cout << root->data << " ";
    print(root->right);
}

int countNodes(Node* root){
    if(root == NULL){
        return 0;
    }
    return (1+countNodes(root->left)+countNodes(root->right));
}


bool isCBT(Node* root , int index ,int totalNodes){
    if(root == NULL){
        return true;
    }
    if(index >= totalNodes){
        return false;
    }else{
        bool left = isCBT(root->left , 2*index+1, totalNodes);
        bool right = isCBT(root->right , 2*index+2 , totalNodes);
        return (left && right);
    }
}

bool isMaxHeapOrder(Node* root){
    if(root->left == NULL && root->right == NULL){
        return true;
    }
    if(root->right == NULL){
        return root->data > root->left->data;
    }else{
        bool left = isMaxHeapOrder(root->left);
        bool right = isMaxHeapOrder(root->right);
        return ((left && right )&& (root->data > root->left->data) && (root->data > root->right->data));
    }
}

bool isHeap(Node* root){
    int index = 0;
    int totalNodes = countNodes(root);
    if(isCBT(root , index , totalNodes) && isMaxHeapOrder(root)){
        return true;
    }else{
        return false;
    }
}

int main ()
{
    Node* root  = takingInput();
    cout <<"Print the Binary Tree " << "\n";
    print(root);
    cout <<"\n";
    if(isHeap(root)){
        cout << "Tree is max Heap" << "\n";
    }else{
        cout << "Tree is not max Heap " << "\n";
    }
    return 0;
}