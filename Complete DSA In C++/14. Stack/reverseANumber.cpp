#include<iostream>
#include<stack>
using namespace std;

void

void reverseNumber(stack<int> &a){
    if(a.empty() == true){
        return ;
    }
    int temp = a.top();
    a.pop();
    reverseNumber(a);
    insertAtBottom(temp , a);
}

int main ()
{

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    reverseNumber(s);
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}