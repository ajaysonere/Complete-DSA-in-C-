#include<iostream>
#include<string>
#include "hashTable.h"
using namespace std;

int main (){
    HashTable<int> h;

    h.insert("Mango",60);
    h.insert("Apple",100);
    h.insert("Banana",40);
    h.insert("Orange",30);
    h.print();
    return 0;
}