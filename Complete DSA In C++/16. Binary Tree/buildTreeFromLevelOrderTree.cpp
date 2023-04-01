#include<iostream>
#include<queue>
using namespace std;

class Node{
    int data;
    Node* left;
    Node* right;
    public:

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }

    Node* buildTree(Node* root);
    Node* levelOrder(Node* root);
    void  buildTreeFromLevelOrder(Node* &root);
};

Node* Node::buildTree(Node* root){
    cout <<"Enter the Data  \n";
    int data;
    cin >> data;

    root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter data for left subTree " << data << "\n";
    root->left = buildTree(root->left);
    cout << "Enter data for right subTree " << data << "\n";
    root->right = buildTree(root->right);
}

Node* Node::levelOrder(Node* root){
    queue<Node* > q;
    q.push(root);
    q.push(NULL);
    
    while(!q.empty()){
        Node* temp = q.front();
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

void Node::buildTreeFromLevelOrder(Node* &root){
     queue<Node* >q;
     cout << "Enter Data \n";
     int data;
     cin >> data;
     root = new Node(data);
     q.push(root);

     while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout << "Enter the data for Left " << temp->data << "\n";
        int leftData;
        cin >> leftData;

        if(leftData != -1){
            temp->left = new Node(leftData);
            q.push(temp->left);
        }

        cout << "Enter the data for right " << temp->data << "\n";
        int rightData;
        cin >> rightData;

        if(rightData != -1){
            temp->right = new Node(rightData);
            q.push(temp->right);
        }
     }
}


int main ()
{

    // input -> 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    Node* root = NULL;
    // root = root->buildTree(root);
    // root->levelOrder(root);
    root->buildTreeFromLevelOrder(root);
    root->levelOrder(root);
    return 0;
}