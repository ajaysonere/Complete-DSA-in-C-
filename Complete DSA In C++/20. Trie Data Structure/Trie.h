#include<unordered_map>
#include<string>
using namespace std;
class Node{
    char data;
    unordered_map<char , Node*>children ;
    bool isTerminal;

    public:
    Node(char data){
        this->data = data;
        isTerminal = false;
    }
    friend class Trie;
};

class Trie{
    Node* root;
    public:
    Trie(){
        root = new Node('\0');
    }
    // insertion in trie 

    void insertWord(string word){
        Node* temp = root;

        for(auto ch : word){
            if(temp->children.count(ch) == 0){
                Node* n = new Node(ch);
                temp->children[ch] = n;
            }
            temp = temp->children[ch];
        }
        temp->isTerminal = true;
    }

    // searching in trie
    bool searchWord(string word){
        Node* temp = root;
        for(auto ch : word){
            if(temp->children.count(ch) == 0){
                return false;
            }
            temp = temp->children[ch];
        }
        return temp->isTerminal;
    }

};