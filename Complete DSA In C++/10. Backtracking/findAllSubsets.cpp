#include<iostream>
using namespace std;

void findAllSubsets(char input[], char output[], int i, int j){
    // base case
    if(input[i] == '\0'){
        output[j] = '\0';
        cout << output << endl;
        return ;
    }

    // recursive case
    // include the character

    output[j] = input[i];
    findAllSubsets(input , output, i+1, j+1);

    // exclude the character 
    findAllSubsets(input , output , i+1, j);

}

int main(){
    char input[100];
    char output[100];
    cin >> input;
    cout << "Subsets are :) " << "\n";
    findAllSubsets(input , output , 0, 0);
    return 0;
}