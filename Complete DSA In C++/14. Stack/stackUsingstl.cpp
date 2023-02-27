#include<iostream>
#include<stack>
using namespace std;

int main ()
{
    // cout << "Stack";
    stack<int> str;

    str.push(10);
    str.push(20);
    str.push(30);
    str.push(40);
    str.push(50);

    cout << str.top() << "\n";
    str.pop();
    cout << str.top() << "\n";

    if(str.empty()){
        cout << "Stack is Empty " << "\n";
    }else{
        cout << "Stack is not Empty " << "\n";
    }

    cout << "Size of Stack is " << str.size() << "\n";
    return 0;
}