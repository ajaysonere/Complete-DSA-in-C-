#include<iostream>
#include<vector>
using namespace std;

int main ()
{
vector<int> v(5);
for(int i=0;i<v.size();i++){
    cin >> v[i];
}
cout << "SIze of the vecotr :" << v.size() << "\n";
cout << "capacity of the vector :" << v.capacity() << "\n";
// using for loop 
for(int i=0;i<v.size();i++){
    cout << v[i] << " ";
}
cout << "\n";
 
 v.push_back(60);
cout << "SIze of the vecotr :" << v.size() << "\n";
cout << "capacity of the vector :" << v.capacity() << "\n";
 // using for each
 for(int x: v){
    cout << x << " ";
 }

 
return 0;
}