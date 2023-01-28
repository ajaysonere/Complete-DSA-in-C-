#include<iostream>
#include<vector>
using namespace std ;

int main(){

    vector<int> vec = {10,20,30,40,50};


    vec.push_back(60);

    // cout << vec.size() << "  \n";

    // cout << vec.capacity() << "\n";
    vec.at(3) = 15;
    vec.emplace(vec.begin()+4,45);

    for(vector<int>::iterator i = vec.begin(); i!= vec.end(); i++){
        cout << *i << " " ;
    }


    return 0;
}