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

void printInOrder(Node* root){
    if(root == NULL){
        return ;
    }
    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}

// it will take O(N) time complexity 
void printInRange(Node* root , int rangeOne , int rangeTwo){
    if(root == NULL){
        return ;
    }
    printInRange(root->left , rangeOne , rangeTwo);
    if(root->data >= rangeOne &&  root->data <= rangeTwo){
        cout << root->data << " ";
    }
    printInRange(root->right , rangeOne , rangeTwo);
}

void printInRangeOpt(Node* root , int rangeOne, int rangeTwo){
    if(root == NULL){
        return ;
    }
    if(root->data >= rangeOne && root->data <= rangeTwo){
        printInRangeOpt(root->left , rangeOne , rangeTwo);
        cout << root->data << " ";
        printInRangeOpt(root->right , rangeOne ,rangeTwo);
    }else if(root->data > rangeTwo){
        printInRangeOpt(root->left , rangeOne , rangeTwo);
    }else{
        printInRangeOpt(root->right , rangeOne , rangeTwo);
    }
}

int main ()
{
    Node* root = NULL;
    int arr[] = {10 ,8 ,21 ,7 ,27, 5 ,4, 3};
    for(auto x :arr){
        root = BuildTree(root , x);
    }
    cout << "In Order in BST " << "\n";
    printInOrder(root);
    cout << "\nEnter the range of nodes \n";
    int rangeOne, rangeTwo;
    cin >> rangeOne >> rangeTwo;
    printInRange(root,rangeOne , rangeTwo);
    cout << endl;
    printInRangeOpt(root,rangeOne , rangeTwo);
    return 0;
}