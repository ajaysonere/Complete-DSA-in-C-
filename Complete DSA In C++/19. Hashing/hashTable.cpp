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
    h.insert("Kiwi" ,50);
    h.insert("Grapes" , 60);
    h.insert("Water melan ",20);
    h.print();
    string fruit;
    cin >> fruit;
    int *price = h.search(fruit);
    if(price != NULL){
        cout << "Fruit price is " << *price << "\n";
    }else{
        cout << "Fruit is not present " << "\n";
    }
    return 0;
}