#include<iostream>
#include<stack>
using namespace std;

bool isOpening(char str){
    if(str == '(' || str == '[' || str == '{'){
        return true;
    }else{
        return false;
    }
}

bool isClosing(char str, stack<char> s){
    if(s.empty()){
        return false;
    }
    if(s.top() == '{' && str == '}' || s.top() == '(' && str == ')'  || s.top() == '[' && str == ']'){
        return true;
    }else{
        return false;
    }
}

bool validParenthesis(string str){
    stack<char> s;
    for(int i=0; i<str.size();i++){
        if(isOpening(char(str[i]))){
            s.push(char(str[i]));
        }else{
            if (isClosing(char(str[i]), s))
            {
                s.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return s.empty();
}

int main(){

    string str;
    cin >> str;

    if(validParenthesis(str)){
        cout << "Parenthesis is Valid " << "\n";
    }else{
        cout << "Parenthesis is not Valid \n";
    }
    return 0;
}

