#include<iostream>
#include<vector>
using namespace std;

int main ()
{
vector <int> v(6,0);

for(int i=0;i<v.size();i++){
    cin>> v[i];
}

bool flag =true;
for(int i=0;i<v.size()-1;i++){
    if(v[i+1]<v[i]){
        flag = false;
        break;
    }
}

if(flag== true){
    cout << "Vector is Sorted :" << "\n";
}else{
    cout << "Vector is not Sorted :" << "\n";
}
return 0;
}