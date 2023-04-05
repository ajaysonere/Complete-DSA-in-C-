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

Node* BuildTree(){
    int data;
    cin >> data;
    Node* root = new Node(data);

    if(data == -1){
        return NULL;
    }
    cout << "Enter the data for the left " << data << "\n";
    root->left = BuildTree();
    cout  << "Entre the data for the left " << data << "\n";
    root->right = BuildTree();
}

void levelOrderTraversal(Node* root){
    queue<Node*> q;
    Node* temp = root;
    q.push(root);
    q.push(NULL);
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

int minDepth(Node* root){
    if(root == NULL){
        return 0;
    }
    int depthOfLeftTree = minDepth(root->left);
    int depthOfRightTree = minDepth(root->right);
    return (depthOfLeftTree < depthOfRightTree )?depthOfLeftTree+1:depthOfRightTree+1;
}

int main ()
{
    // input data -> 2 7 -1 9 11 -1 -1 4 -1 -1 5 -1 1 -1 -1
    Node* root = BuildTree();
    cout << "Level Order traversal " << "\n";
    levelOrderTraversal(root);
    cout << "Min Depth is : " << minDepth(root) << "\n";
    return 0;
}