#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

bool compareFirst(pair<int, int> com1, pair<int, int> com2)
{
    return (com1.first <= com2.first);
}

bool compareSecond(pair<int, int> com1, pair<int, int> com2)
{
    return (com1.second < com2.second);
}

vector<pair<int, int>> sortCabs(vector<pair<int, int>> v)
{
    // your code  goes here
    sort(v.begin(), v.end(), compareFirst);
    sort(v.begin(), v.end(), compareSecond);
    vector<pair<int, int>> ans = v;
    return ans;
}

int main ()
{
    vector<pair<int, int>> cabs = {{2, 3},
                                   {1, 2},
                                   {3, 4},
                                   {2, 4},
                                   {1, 4} };

    vector<pair<int,int>> ans =  sortCabs(cabs);
    for (auto x : ans)
    {
        cout << x.first << " " << x.second << "\n";
    }

     return 0;
}