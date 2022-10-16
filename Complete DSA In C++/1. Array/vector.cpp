#include<iostream>
#include<vector>
using namespace std;

int main ()
{
int size;
cin >> size;
vector<int> v;
cout << v.size()<< "\n";
int value;
for(int i=0;i<size;i++){
    cin>> value;
    v.push_back(value);
}
for(int i=0;i<v.size();i++){
    cout << v[i] << "\n";
}
cout << "Size" << v.size() << "\n";
 return 0;
}