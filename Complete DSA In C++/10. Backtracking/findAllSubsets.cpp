#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(string a , string b){
    if(a.length() == b.length()){
        return a < b;
    }
    return a.length() < b.length();
}

void findAllSubsets(char input[], char output[], int i, int j , vector<string> &list){
    // base case
    if(input[i] == '\0'){
        output[j] = '\0';
        string temp = output;
        list.push_back(temp);
        return ;
    }

    // recursive case
    // include the character

    output[j] = input[i];
    findAllSubsets(input , output, i+1, j+1 , list);

    // exclude the character 
    findAllSubsets(input , output , i+1, j , list);

}

int main(){
    char input[100];
    char output[100];
    cin >> input;
    cout << "Subsets are :) " << "\n";
    vector<string> list;
    findAllSubsets(input , output , 0, 0 , list);
    sort(list.begin(),list.end(),compare);

    for(auto x : list){
        cout << x << " ";
    }
    return 0;
}