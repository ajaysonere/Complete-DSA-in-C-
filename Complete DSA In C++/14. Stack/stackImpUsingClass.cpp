#include<iostream>
using namespace std;

class Stack{
    
    // data memebers 
    public:
    int *arr;
    int top;
    int data;
    int size;

    // member Functions 
    Stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    // push an element in stack 
    void push(int data){
       if(size-top >1){
          top++;
          arr[top] = data;
       }else{
         cout << "stack is Full  \n";
       }
    }

    // pop in element from stack
    void pop(){
        if(top == -1){
            cout << "element is not present in stack \n";
        }else{
            top--;
        }
    }

    // get the top element of the stack
    int peek(){
        if(top == -1){
            cout << "stack is empty " << "\n";
            return -1;
        }else{
            return arr[top];
        }
    }

    bool isEmpty(){
        if(top >= 0){
            return true;
        }else{
            return false;
        }
    }

};

int main ()
{
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout << st.peek() << "\n";
    st.pop();
    cout << st.peek() << "\n";
    st.pop();
    st.pop();
    cout << st.peek() << "\n";
    st.pop();
    cout << st.peek() << "\n";
    cout << st.isEmpty() << "\n";

    return 0;
}