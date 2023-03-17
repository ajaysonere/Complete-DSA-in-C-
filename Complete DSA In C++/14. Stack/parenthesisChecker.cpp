#include<iostream>
#include<stack>
using namespace std;

bool validParenthesis(string str){
    stack<int> s;
    for(int i=0; i<s.size();i++){
        if(isOpening(s[i])){
            s.push(s[i]);
        }else{
            if(isClosing(s[i])){
                
            }
        }
    }
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

