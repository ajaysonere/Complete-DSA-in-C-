#include<iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s, int value){
    if(s.empty()){
        s.push(value);
        return ;
    }

    int temp = s.top();
    s.pop();

    insertAtBottom(s,value);

    s.push(temp);
}

int main (){ 
    stack<int> s;
    s.push(5);
    s.push(4);
    s.push(3);
    s.push(2);

    // while(!s.empty()){
    //     cout << s.top() << "\n";
    //     s.pop();
    // }

    insertAtBottom(s,1);
    cout << "After inserting An element two the bottom " << "\n";
    while (!s.empty())
    {
        cout << s.top() << "\n";
        s.pop();
    }
    return 0;
}