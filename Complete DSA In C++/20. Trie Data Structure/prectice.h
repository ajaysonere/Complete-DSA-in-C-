#include<unordered_map>
#include<string>

class Node{
    char data;
    unordered_map<char , Node*> children;
    bool isTerminal;
    public:
    Node(char data){
        this->data = data;
        this->isTerminal = false;
    }
    friend class Trie;
};

class Trie{
    Node* root;
    public:

    Trie(){
        root = new Node('\0');
    }

    // for inserting the 
    void insert(string str){
        Node* temp = root;
        for(char ch : str){
            if(temp->children.count(ch) == 0){
                Node* n = new Node(ch);
                temp->children[ch] = n;
            }
        }
        temp->isTerminal = true;
    }

    //for searching the
    void search(string str){
        Node* temp = root;
        for(char ch : str){
            if(temp->children.count(ch)==0){
                return false;
            }
            temp = temp->children[ch];
        }
        return temp->isTerminal;
    }

};