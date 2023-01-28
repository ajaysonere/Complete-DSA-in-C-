#include<iostream>
#include "vector.h"
using namespace std;


int main ()
{ 
   // Vector<char> ch;
   // ch.push_back('a');
   // ch.push_back('b');
   // ch.push_back('c');
   // ch.push_back('d');

   // for(int i=0;i<ch.size();i++){
   //    cout << ch[i] << " ";
   // }

   Vector<int> v(3);

   v.push_back(1);
   v.push_back(2);
   v.push_back(3);
   v.push_back(4);
   v.push_back(5);
   v.push_back(6);
   v.pop_back();
   cout << v.front() << "\n";
   cout << v.back() << "\n";
   cout << v.at(1) << "\n";

   cout << v.size() << "\n";
   cout << v.capacity() << "\n";

   for (int i = 0; i < v.size(); i++)
   {
      cout << v[i] << " " << "\n";
    }
    int key;
    cin >> key;
    if(v.find(key)){
      cout << "Element is present";
    }else{
      cout << "Element is not present";
    }

    return 0;
}