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

class HDpair{
 public:
 int height;
 int diameter;
};

HDpair optimizedDiameter(Node* root){
    HDpair p;
    if(root == NULL){
        p.height = p.diameter = 0;
        return p;
    }

    HDpair left = optimizedDiameter(root->left);
    HDpair right = optimizedDiameter(root->right);

    p.height = max(left.height , right.height)+1;

    int d1 = left.height + right.height;
    int d2 = left.diameter;
    int d3 = right.diameter;

    p.diameter =  max(d1, max(d2,d3));
    return p;

}


Node* BuildTree(){
    cout << "Enter the data " << "\n";
    int data;
    cin >> data;
    Node* root = new Node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter data for left Subtree " << data << "\n";
    root->left = BuildTree();
    cout << "Enter data for right Subtree "<< data << "\n";
    root->right = BuildTree();
    return root;
}

int height(Node* root){
    if(root == NULL){
        return 0;
    }
    int left = height(root->left);
    int right = height(root->right);
    return 1+max(left , right);
}

void preOrder(Node* root){
    if(root == NULL){
        return ;
    }

    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}

// diameter of the tree  O(n^2)
int diameterNaive(Node* root){
    if(root == NULL ){
        return 0;
    }
    int diameter1 = height(root->left) + height(root->right);
    int diameter2 = height(root->left);
    int diameter3 = height(root->right);
    return max(diameter1 , max(diameter2, diameter3));
}



int main ()
{
    Node* root = BuildTree();
    preOrder(root);
    int ans  = diameterNaive(root);
    cout << "\nDiameter is " << ans << "\n";
    cout << "Optimized Diameter is " << optimizedDiameter(root).diameter << "\n";
    return 0;
}