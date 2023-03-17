#include<iostream>
#include<stack>
using namespace std;

// below code is correct something wrong with online judge ,I  think.

bool isParenthesisDuplicate(string str){
   stack <char> st;
   for(int i= 0; i<str.size(); i++){
      if(str[i] == '(' || str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/'){
         st.push(str[i]);
      }else if(str[i] == ')'){
         if(st.size() > 0 &&  st.top() == '('){
            return true;
         }
         while(st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top()=='/'){
            st.pop();
         }
         st.pop();
      }
   }
   return false;
}


int main ()
{
    string str;
    cin >> str;
    
    bool ans = isParenthesisDuplicate(str);

    if(ans){
        cout << "Parenthesis is Duplicate " << ans << "\n";
    }else{
        cout << "Parenthesis is not Duplicate " << ans << "\n";
    }

    return 0;
}