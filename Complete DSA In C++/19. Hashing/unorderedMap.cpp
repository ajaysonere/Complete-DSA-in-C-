#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, int> mp;
    int size = 5;
    for (int i = 0; i < size; i++)
    {
        mp[i] = i + 10;
    }

    for (unordered_map<int, int>::iterator itr = mp.begin(); itr != mp.end(); itr++)
    {
        cout << itr->first << " " << itr->second << "\n";
    }
    mp.erase(3);
    cout << "size of the unordered_map " << mp.size() << "\n";
    for (unordered_map<int, int>::iterator itr = mp.begin(); itr != mp.end(); itr++)
    {
        cout << itr->first << " " << itr->second << "\n";
    }
    if (mp.find(3) != mp.end())
    {
        cout << "present in unordered_map "
             << "\n";
    }
    else
    {
        cout << "Not present in unordered_map "
             << "\n";
    }
    return 0;
}