// implementing the hash table
#include<string>
#include<iostream>
using namespace std;


template<typename T>
class Node{
    public:
    T value;
    Node<T>* next ;
    string key;

    Node(string key , T value){
        this->key = key;
        this->value = value;
        this->next = NULL;
    }

    ~Node(){
        if(next != NULL){
            delete next;
        }
    }
};

template<typename T>
class HashTable{
    Node<T> **table;
    int cs;
    int ts;
    public:

    int hashFun(string key){
        int index = 0;
        int power = 1;
        for(int i=0; i<key.size();i++){
            index = (index + key[i]*power)%ts;
            power = (power*29)%ts;
        }
        return index;
    }

    HashTable(int defaultSize = 7){
        this->cs = 0;
        this->ts = defaultSize;
        table = new Node<T>*[ts];
        for(int i=0;i<ts;i++){
            table[i] = NULL;
        }
    }

    void insert(string key , T value){
        int index = hashFun(key);
        Node<T>* n = new Node<T>(index);
        n->next = table[index];
        table[index] = n;
        cs++;
        float loadFactor = cs/float(ts);
        if(loadFactor > 0.7){
            Node<T>** oldTable = table;
            int oldTableSize = ts;
            ts = 2*ts+1;
            table = new Node<T>*[ts];
            // assign the null to all the values 
            for(int i=0; i<ts; i++){
                table[i] = NULL;
            }

            // assign all the values from oldtable to new table
            for(int i=0;i<oldTableSize; i++){
                Node<T>*temp = oldTable[i];

                while(temp != NULL){
                    string key = temp->key;
                    T value = temp->value;
                    insert(key , value);
                    temp = temp->next;
                }

                if(oldTable[i] != NULL){
                    delete oldTable[i];
                }
            }
            delete []oldTable;
        }
    }
    void print(){
        for(int i=0; i<ts; i++){
            cout << "Row No. -> " << i ;
            Node* temp = table[i];
            while(temp != NULL){
                cout << temp->key << " ";
                temp = temp->next;
            }
            cout << "\n";
        }
};