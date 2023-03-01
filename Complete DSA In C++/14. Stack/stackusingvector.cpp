#include<iostream>
#include "stackusingvector.h"
using namespace std;

int main (){
    
    Stack <int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    while(!s.isEmpty()){
        cout << s.peek() << " ";
        s.pop();
    }
    cout << "\n";
    return 0;
}