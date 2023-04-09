#include<iostream>
#include<set>
using namespace std;

int main (){
 
    set<int> s;
    s.insert(10);
    s.insert(20);
    s.insert(30);
    s.insert(40);
    s.insert(40);

    for(set<int>::iterator itr = s.begin() ; itr != s.end(); itr++){
        cout << *itr << " ";
    }
    cout <<"\n";
    s.erase(30);
    for (set<int>::iterator itr = s.begin(); itr != s.end(); itr++)
    {
        cout << *itr << " ";
    }
    cout <<"\n";
    if(s.find(20) == s.end()){
        cout << "Element is not present " << "\n";
    }else{
        cout << "Element is present " << "\n";
    }

    cout << "Size of the set " << s.size() << "\n";
    return 0;
}