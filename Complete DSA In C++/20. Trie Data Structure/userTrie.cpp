#include<iostream>
#include "Trie.h"
using namespace std;

int main ()
{
    Trie t;

    string arr[] = {"Mango" , "Banana" , "Orange" , "Apple" , "Grapes"};

    for(auto word : arr){
        t.insertWord(word);
    } 

    string key;
    cin >> key;

    cout << "Key is present " << t.searchWord(key) << "\n";
    return 0;
}