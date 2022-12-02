#include<iostream>
#include<vector>
using namespace std;

int main ()
{
 vector<int> v(5,0);
 for(int i=0;i<v.size();i++){
    cin >> v[i];
 }

 int evenSum =0;
 int oddSum =0;
 for(int i=0;i<v.size();i++){
    if(i%2==0){
        evenSum +=v[i];
    }
    else{
        oddSum +=v[i];
    }
 }

 cout <<"Diffrence between Even Sum  And Odd Sum :"<< (evenSum-oddSum) << "\n";

 return 0;
}