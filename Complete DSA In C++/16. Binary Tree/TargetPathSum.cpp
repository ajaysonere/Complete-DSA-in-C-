#include<iostream>
#include<vector>
using namespace std;

class Node{
    public:
    int val;
    Node* left = NULL;
    Node* right = NULL;

    Node(int data){
        this->val = data;
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

void pathSumHelper(Node *root, int targetSum, vector<int> &&path, vector<vector<int>> &ans)
{
    if (root == NULL)
    {
        return;
    }
    path.push_back(root->val);
    if (targetSum == root->val && !root->left && !root->right)
    {
        ans.push_back(path);
        return;
    }
    pathSumHelper(root->left, targetSum - root->val, vector<int>(path), ans);
    pathSumHelper(root->right, targetSum - root->val, vector<int>(path), ans);
}

void pathSum(Node *root, int targetSum , vector<vector<int>> &ans)
{
    // your code goes here
    pathSumHelper(root, targetSum, vector<int>(), ans);
}

int main ()
{
    // input formet -> 5 4 11 7 -1 -1 2 -1 -1 -1 8 13 -1 -1 4 5 -1 -1 1 -1 -1
    Node* root = BuildTree();
    cout << "Enter the target sum " << "\n";
    int targetSum ;
    cin >> targetSum;
    vector<vector<int>> ans;
    pathSum(root,targetSum , ans);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}