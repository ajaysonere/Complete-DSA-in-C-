#include<iostream>
#include<map>
using namespace std;

int main ()
{
    map<int ,int>mp;
    int size = 5;
    for(int i=0; i<size;i++){
        mp[i] = i+10;
    }

    for(map<int,int> ::iterator itr = mp.begin(); itr != mp.end() ;itr++){
        cout << itr->first << " " << itr->second << "\n";
    }
    mp.erase(3);
    cout << "size of the map " << mp.size() << "\n";
    for (map<int, int>::iterator itr = mp.begin(); itr != mp.end(); itr++)
    {
        cout << itr->first << " " << itr->second << "\n";
    }
    if(mp.find(3) != mp.end()){
        cout << "present in map " << "\n";
    }else{
        cout << "Not present in map " << "\n";
    }
    return 0;
}