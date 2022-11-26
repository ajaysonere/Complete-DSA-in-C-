#include<iostream>
#include<vector>
using namespace std;

int main ()
{
vector<int> v(5);
for(int i=0;i<5;i++){
    cin >> v[i];
}
cout << "Ente x:"<< "\n";
int x;
cin >>x;

int lastOccurence = -1;
for(int i=0;i<v.size();i++){
    if(v[i]==x){
       lastOccurence = i;
    }
}

cout << "Last Occurence " << lastOccurence <<"\n";
return 0;
}