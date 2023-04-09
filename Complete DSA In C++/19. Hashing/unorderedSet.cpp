#include<iostream>
#include<unordered_set>
using namespace std;

int main (){
    
    unordered_set<int> s;
    cout << "size of the Unordered Set " << s.size() << "\n";
    s.insert(10);
    s.insert(30);
    s.insert(20);
    s.insert(40);
    s.insert(30);

    for(unordered_set<int>::iterator itr = s.begin(); itr != s.end(); itr++){
        cout << *itr << " ";
    }

    cout << "\nsize of the Unordered Set " << s.size() << "\n";
    s.erase(20);
    for(unordered_set<int>::iterator itr = s.begin(); itr != s.end(); itr++){
        cout << *itr << " ";
    }
    cout << "\nsize of the Unordered Set " << s.size() << "\n";
    if(s.find(30) == s.end()){
        cout << "30 is not present " << "\n";
    }else{
        cout << "30 is present " << "\n";
    }
    return 0;
}