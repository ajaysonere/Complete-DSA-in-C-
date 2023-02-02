#include<iostream>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    
    // is n is power of two
    if((n&(n-1))==0){
        cout << "Power oF Two " << "\n";
    }else{
        cout << "Not A Power Of Two " << "\n";
    }
    return 0;
}