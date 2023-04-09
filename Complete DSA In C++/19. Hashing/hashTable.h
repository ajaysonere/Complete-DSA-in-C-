// implementing the hash table
#include<iostream>
#include<string>
using namespace std;

template<typename T>
class Node{
    public:
    T value;
    Node<T>* next ;
    string key;

    Node(string key , T value){
        this->key = key ;
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

    void rehash(){
        Node<T> **oldTable = table;
        int oldTableSize = ts;
        cs =0;
        ts = 2 * ts + 1;
        table = new Node<T> *[ts];
        // assign the null to all the values
        for (int i = 0; i < ts; i++)
        {
            table[i] = NULL;
        }

        // assign all the values from oldtable to new table
        for (int i = 0; i < oldTableSize; i++)
        {
            Node<T> *temp = oldTable[i];

            while (temp != NULL)
            {
                string key = temp->key;
                T value = temp->value;
                insert(key, value);
                temp = temp->next;
            }

            if (oldTable[i] != NULL)
            {
                delete oldTable[i];
            }
        }
        delete[] oldTable;
    }

    public:
    int hashFun(string key){
        int index = 0;
        int power = 1;
         
        for(auto ch :key){
            index = (index + ch * power) % ts;
            power = (power * 29) % ts;
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
        Node<T>* n = new Node<T>(key , value);
        n->next = table[index];
        table[index] = n;
        cs++;
        float loadFactor = cs/float(ts);
        if(loadFactor > 0.7){
            rehash();
        }
    }
    
    T* search(string key){
        int index = hashFun(key);
        Node<T>* temp = table[index];

        while(temp != NULL){
            if(temp->key == key){
                return &temp->value;
            }
            temp = temp->next;
        }
        return NULL;
    }

    T& operator[](string key){
        T* valueFound = search(key);
        if (valueFound == NULL){
            T object;
            insert(key , object);
            valueFound = search(key);
        }
        return *valueFound;
    }

    void erase(string key){
        int index = hashFun(key);
        Node<T> * temp = table[index];
        // when key is present at first index 
        if(table[index] == NULL){
            return ;
        }
        Node<T>* prev = NULL;
        if(temp->key == key){
            prev = temp;
            temp = temp->next;
            prev->next = NULL;
            table[index] = temp;
            delete prev;
        }else{
            while(temp->key != key){
                prev = temp;
                temp = temp->next;
            }            
            if(temp->next == NULL){
                table[index] = NULL;
                delete temp;
            }

            prev->next = temp->next;
            temp->next = NULL;
            delete temp;
        }     
    }

    void print(){
        for(int i=0; i<ts; i++){
            cout << "Row No. -> " << i << " ";
            Node<T>* temp = table[i];
            while(temp != NULL){
                cout << temp->key << " ";
                temp = temp->next;
            }
            cout << "\n";
        }
    }
};
