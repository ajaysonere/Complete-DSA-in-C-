#include<iostream>
#include<vector>
using namespace std;

int main ()
{
  vector<int> v;
  int value;
  for(int i=0;i<5;i++){
     cin >> value;
     v.push_back(value);
  }
  for(int i=0;i<v.size();i++){
    cout << v[i] << " ";
  }
  return 0;
}