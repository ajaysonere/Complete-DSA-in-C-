#include<iostream>
#include "Stack.h" 
using namespace std;

int main ()
{
    Stack<char> s;
    s.push('h');
    s.push('e');
    s.push('l');
    s.push('l');
    s.push('o');

    while(){
        cout << s.top() << "\n";
        s.pop();
    }
    return 0;
}