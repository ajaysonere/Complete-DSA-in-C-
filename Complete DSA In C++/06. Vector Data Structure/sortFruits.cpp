#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compare(pair<string, int> s1, pair<string, int> s2){

    return s1.second < s2.second;
}

vector<pair<string, int>> sortFruit(vector<pair<string, int>> &v, string S)
{
    // your code  goes here
    if (S == "name"){
        sort(v.begin(), v.end());
    }else{
        sort(v.begin(), v.end(), compare);
    }
    return v;
}


int main ()
{
    vector<pair<string, int>> fruit = {{"Mango", 100},
                                       {"Guava", 70},
                                       {"Grapes", 40},
                                       {"Apple", 60},
                                       {"Banana", 30} };

    string S;
    cin >> S;

    vector< pair<string ,int> > ans  = sortFruit(fruit,S);

    for (auto ans : fruit)
    {
        cout << ans.first << " " << ans.second << "\n";
    }

    return 0;
}