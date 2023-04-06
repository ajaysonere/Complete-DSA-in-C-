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

Node* BuildTree(){
    cout << "Enter data " << "\n";
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

void printInOrder(Node* root){
    if(root == NULL){
        return ;
    }
    printInOrder(root->left);
    cout << root->data << " ";
    printInOrder(root->right);
}

void removeHalfNodesHelper(Node* root , vector<int> &ans){
    if(root == NULL){
      return ;
    }
    removeHalfNodesHelper(root->left , ans);
    if(root->left && root->right){
        ans.push_back(root->data);
    }
    if(!root->left && !root->right){
        ans.push_back(root->data);
    }
    removeHalfNodesHelper(root->right , ans);
}

vector<int> removeHalfNodes(Node* root){
    vector<int> ans;
    removeHalfNodesHelper(root , ans);
    return ans;
}

int main ()
{
    // input formet > 2 7 -1 6 1 -1 -1 11 -1 -1 5 -1 9 4 -1 -1 -1
    Node* root = BuildTree();
    cout << "Before removing the Half Nodes " << "\n";
    printInOrder(root);
    cout << "\n";
    vector<int> ans  = removeHalfNodes(root);
    cout << "After removeing the hald Nodes " << "\n";
    for(int i=0; i<ans.size(); i++){
        cout<< ans[i] << " ";
    }
    return 0;
}
