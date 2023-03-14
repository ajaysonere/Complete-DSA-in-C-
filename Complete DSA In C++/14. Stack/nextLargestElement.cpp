#include <iostream>
#include <vector>
using namespace std;


// The solution will take O(n^2) time complexity 
vector<int> nextGreatestElement(vector<int> vec)
{
    vector<int> ans;
    for (int i = 0; i < vec.size() - 1; i++)
    {
        for (int j = i + 1; j < vec.size(); j++)
        {
            if (vec[j] > vec[i])
            {
                ans.push_back(vec[j]);
                break;
            }
        }
    }
    ans.push_back(-1);
    return ans;
}

vector<int> nextGreatestElement(vector<int> vec){
    
}

int main()
{
    vector<int> vec(6);
    // taking input in vector
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
    }

    // calling the next greatest element function
    vector<int> ans = nextGreatestElement(vec);

    // ans
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
