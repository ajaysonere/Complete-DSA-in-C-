#include<iostream>
using namespace std;

void printStep(int steps){
    if(steps == 10){
        cout << "You Reached Home " << "\n";
        return ;
    }
    steps = steps+1;
    printStep(steps);
}

int main ()
{
    // recursion is a function that called itself .
    cout << "Recursion" << "\n";
    int steps = 0;
    printStep(steps);
return 0;
}