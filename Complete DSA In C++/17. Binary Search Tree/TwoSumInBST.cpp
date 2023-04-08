#include<iostream>
#include<vector>
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
    if(data > root->data){
        root->right = buildTree(root->right , data);
    }else{
        root->left = buildTree(root->left , data);
    }
    return root;
}

Node* takingInput(){
    cout << "Enter data \n";
    int data;
    cin >>data;

    Node* root = NULL;
    while(data != -1){
        root = buildTree(root ,data);
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

void toSumHelper(Node* root , int sum , vector<int> &inOrderVal){
    if(root == NULL){
        return ;
    }
    toSumHelper(root->left , sum , inOrderVal);
    inOrderVal.push_back(root->data);
    toSumHelper(root->right , sum , inOrderVal);
}

bool toSumInBST(Node* root , int target){
    vector<int> inOrderVal;
    toSumHelper(root , target , inOrderVal);
    int i=0, j = inOrderVal.size()-1;
    while(i<j){
        int sum = inOrderVal[i]+inOrderVal[j];
        if(sum == target){
            return true;
        }
        if(sum > target){
            j--;
        }else{
            i++;
        }
    }
    return false;
}

int main ()
{
    Node* root = takingInput();
    cout << "INORDER OF BST " << "\n";
    printInOrder(root);
    cout << "\nEnter the target for two sum \n";
    int target;
    cin >> target;
    if(toSumInBST(root ,target)){
        cout<< "Sum is Found in BST " << "\n";
    }else{
        cout << "Sum is not Found In BST " << "\n";
    }
    return 0;
}