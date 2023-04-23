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

    void insertUtill(TrieNode* root , string str){
        // base condition
        if(str.length() == 0){
            root->isTerminal = true;
            return ;
        }

        // assumption , string will be in the Caps
        
    }

    void insertWord(string str){
        insertUtill(root , str);
    }

}

int main ()
{
    return 0;
}