#include<iostream>
#include<vector>
using namespace std;

int main ()
{
vector<int> v(5,0);
for(int i=0;i<v.size();i++){
    cin >> v[i];
}

cout << "Enter the Element :" << "\n";
int element;
cin >> element;

int countOccurence=0;
for(int x:v){
    if(x==element){
        countOccurence++;
    }
}

cout << "Occurence Of the Element is :" << countOccurence << "\n";
return 0;
}