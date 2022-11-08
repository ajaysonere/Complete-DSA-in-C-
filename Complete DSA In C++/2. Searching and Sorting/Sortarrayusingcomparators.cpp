#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortWithComparators(vector<int> &vec, bool flag){
    if(flag ==1){
        for(int pos = 1; pos<vec.size();pos++){
            int current = vec[pos];
            int prev = pos-1;
            while(prev >=0 && vec[prev]>current){
                vec[prev+1] = vec[prev];
                prev--;
            }
            vec[prev+1] = current;
        }
    }
    else{
        sort(vec.begin(),vec.end(),greater<int>());
    }
}

int main ()
{
 
 int size;
 cin >> size;
 vector<int> vec;
 int value;
 for(int i=0;i<size;i++){
    cin >> value;
    vec.push_back(value);
 }
 cout << " Before the sort : "<< "\n"; 
 for(int x:vec){
   cout << x << " ";
 }
 cout << "\n Enter the True or flase value " << "\n";
 bool flag;
 cin >> flag;
 sortWithComparators(vec,flag);
 cout << "After the sort :" << "\n";
 for(int x: vec){
    cout << x << " ";
 }
 return 0;
}