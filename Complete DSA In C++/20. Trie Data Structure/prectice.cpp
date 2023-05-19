#include<iostream>
#include "prectice.h"
using namespace std;

int main(){
    string words[] = {"apple" , "mango" , "orange" , "onion","tomoto"};

    Trie T;

    for(auto word : words){
        T.insert(word);
    }

    string key;
    cin >> key;

    cout << T.search(key) << "\n";
    return 0;
}