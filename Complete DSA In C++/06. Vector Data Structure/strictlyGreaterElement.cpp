#include<iostream>
#include<vector>
using namespace std;

int main ()
{
vector<int> v(6,0);

for(int i=0;i<v.size();i++){
    cin >> v[i];
}

cout << "Enter the Element" << "\n";
int element;
cin >> element;

int countGreater = 0;
for(int x:v){
    if(x>element){
      countGreater++;
    }
}

cout << "Count Of Greater Element :" << countGreater << "\n";


return 0;
}