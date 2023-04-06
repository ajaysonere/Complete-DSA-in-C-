#include<iostream>
#include<stack>
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

Node* BuildTree(){
    int data;
    cin >> data;

    Node* root = new Node(data);
    if(data == -1){
        return NULL;
    }
    root->left = BuildTree();
    root->right = BuildTree();
    return root;
}

void printPostOrder(Node* root){
    stack<Node* > s;
    Node* curr = root;
    while(curr != NULL || !s.empty()){
        if(curr != NULL){
            s.push(curr);
            curr = curr->left;
        }else{
            root = s.top()->right;
            if(root == NULL){
                root = s.top();
                s.pop();
                cout << root->data << " ";
                while(!s.empty() && root == s.top()->right){
                    root = s.top();
                    s.pop();
                    cout << root->data << " ";
                }
            }else{
                curr = root;
            }
        }
    }
}

int main ()
{
    Node* root = BuildTree();
    cout <<"Post Order " << "\n";
    printPostOrder(root);
    cout << "\n";
    return 0;
}