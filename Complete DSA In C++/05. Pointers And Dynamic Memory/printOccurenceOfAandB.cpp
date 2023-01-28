#include<iostream>
using namespace std ;

void printFirstAndLastOccurecneOfA(string str, int *first, int *last)
{

    // for first occurence of the a 
    for(int i=0; i<str.size(); i++){
        if(str[i] == 'a'){
            *first  = i;
            break;
        }
    }

    // for the last occurence of the a

    for(int i= str.size()-1; i>=0 ; i--){
        if(str[i] == 'a'){
            *last  = i;
            break;
        }
    }
}

int main(){

    string str;
    cin >> str ;

    int first = -1;
    int last = -1;

    printFirstAndLastOccurecneOfA(str, &first, &last);
    cout << "First Occurence of A " << first << " Last Occurence of B " << last << "\n";

    return 0;
}


