#include<iostream>
#include<queue>
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
    cout <<"Enter the Data  : \n";
    int data;
    cin >> data;
    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter the Data for Left " << data << "\n";
    root->left = buildTree(root->left);
    cout << "Enter the Data for right " << data << "\n";
    root->right = buildTree(root->right);
    return root;
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);
    
    while(!q.empty()){
        Node* temp = q.front();
        cout << temp->data << " ";
        q.pop();
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
}

int main ()
{
//  cout << "Binary Tree";
//  input data - > 10 11 12 14 -1 -1 -1 13 -1 -1 9 8 -1 -1 6 -1 -1 
    Node* root = NULL;

    root = buildTree(root);
    levelOrderTraversal(root);
    return 0;
}