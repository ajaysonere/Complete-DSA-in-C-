#include<iostream>
#include<stack>
using namespace std;

int reverseNumber(int n){
    stack<int> s;
    int local = n;
    n=0;
    while(local > 0){
        int temp = local%10;
        n = n*10+temp;
        local = local/10;
    }
    
    while(n > 0){
        int temp = n%10;
        s.push(temp);
        n = n/10;
    }

    int ans = 0;
    while(!s.empty()){
        ans = ans*10 + s.top();
        s.pop();
    }
    return ans;
}

int main ()
{
    int n;
    cin >> n;
    int ans  = reverseNumber(n);
    cout << ans << "\n";
    return 0;
}