#include<iostream>
#include "Trie.h"
using namespace std;

int main ()
{
    Trie t;

    string arr[] = {"Mango" , "Banana" , "Orange" , "Apple" , "Grapes"};

    for(auto word :cls
     arr){
        t.insertWord(word);
    } 
    return 0;
}