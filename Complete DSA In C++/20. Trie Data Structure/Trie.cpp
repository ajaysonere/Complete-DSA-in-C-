#include<iostream>
using namespace std;

class TrieNode{
    public:
      char data;
      TrieNode* childNode[26];
      bool isTerminal;

    TrieNode(char data){
        this->data = data;
        for(int i=0; i<26;i++){
            childNode[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie{
    public:

    TrieNode* root;

    Trie(){
        root = new TrieNode('\0');
    }

    void insertUtill(TrieNode* root , string str){
        // base condition
        if(str.length() == 0){
            root->isTerminal = true;
            return ;
        }

        // assumption , string will be in the Caps
        int index = str[0] - 'A';
        TrieNode* child;

        // word is already present
        if(root->childNode[index] != NULL){
           child = root->childNode[index];
        }else{
            // word is not present
            child = new TrieNode(str[0]);
            root->childNode[index] = child;
        }
        insertUtill(child , str.substr(1));
    }

    void insertWord(string str){
        insertUtill(root , str);
    }

};

int main ()
{
    Trie *t = new Trie();

    t->insertWord("ABCD");

    return 0;
}