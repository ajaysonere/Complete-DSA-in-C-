#include<iostream>
using namespace std;

int main (){
    int number;
    cin >> number;

    if(number&1){
        cout << "Odd Number " << "\n";
    }else{
        cout << "Even Number "<< "\n";
    }
    return 0;
}