#include<iostream>
#include<vector>
using namespace std;

//Time complexity of This Naive Solution Will be O(n^2)
void stockSpanProblem(vector<int> vec){
    for(int i=0; i<vec.size(); i++){
        int span =1;
        for(int j= i-1; j>=0; j--){
            if(vec[j] > vec[i]){
                break;
            }else{
                span++;
            }
        }
        cout << span << " ";
    }
}

int main ()
{
    vector<int> vec(7);
    for(int i= 0; i < 7; i++){
        cin >> vec[i];
    }
    stockSpanProblem(vec);
    return 0;
}