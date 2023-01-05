#include<iostream>
#include<cstring>
using namespace std;

int main(){
    
    char a[1000]= "apple";
    char b[1000];

    cout << strlen(a) << "\n";
    // cout << capa(a) << "\n";
    
    // strcpy
    strcpy(b,a);
    cout << b << "\n";

    //  strcmp  It Will return the Boolean Value
    int res = strcmp(a, b);
    cout << res << "\n";
    if( res == 0){
        cout << "Both strings are same " << "\n";
    }else{
        cout <<"Both strings are not same " <<"\n";
    }
    
    // strcat
    char web[]= "https://www.";
    char domain[] = "udemy.com";

    //  cout << strcat(web,domain) << "\n";
     strcpy(b,strcat(web,domain));
    // cout << "After Coping " << b <<"\n";

    cout << strcmp(a,b) << "\n";
    return 0;
}