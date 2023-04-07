#include<iostream>
#include<queue>
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

Node* takingInput(){
    int data;
    cin >> data;
    Node* root = NULL;
    while(data != -1){
        root = BuildTree(root , data);
        cin >> data;
    }
    return root;
}

void printLevelOrderBST(Node* root){
    queue<Node* >q;
    q.push(root);
    q.push(NULL);
    Node* temp = root;
    while(!q.empty()){
        temp = q.front();
        q.pop();

        if(temp == NULL){
            cout << "\n";
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout << temp->data << " ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void printPreOrderBST(Node* root){
    stack<Node*> st;
    st.push(root);

    while(!st.empty()){
        Node* temp = st.top();
        st.pop();
        cout << temp->data << " ";
        if(temp->right){
            st.push(temp->right);
        }
        if(temp->left){
            st.push(temp->left);
        }
    }
}

void printInOrderBST(Node* root){
    stack<Node*>s;
    while(true){
        if(root != NULL){
            s.push(root);
            root = root->left;
        }else{
            if(s.empty()){
                break;
            }
            root = s.top();
            s.pop();
            cout << root->data << " ";
            root = root->right;
        }
    }
}

void printPostOrderBST(Node* root){
    stack<Node*>s;
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


int main (){
//  cout << "Binary Search tree";
    cout << "Enter the Nodes of BST \n";
    Node* root = takingInput();
    cout << "Print the BST In Level Order Traversal  \n";
    printLevelOrderBST(root);
    cout << "\nPrint the BST In Pre Order Traversal \n";
    printPreOrderBST(root);
    cout << "\nPrint the BST In  In-Order Traversal \n";
    printInOrderBST(root);
    cout << "\nPrint the BST In Post Order Traversal \n";
    printPostOrderBST(root);

    return 0;
}