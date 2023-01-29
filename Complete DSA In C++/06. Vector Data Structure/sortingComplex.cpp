#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int totalMarks(vector<int> s1){
    return s1[0]+s1[1]+s1[2];
}

bool compare(pair<string,vector<int>> s1, pair <string , vector<int>> s2 ){

    vector<int> m1 = s1.second;
    vector<int> m2 = s2.second;
    return totalMarks(m1) > totalMarks(m2);

}

int main ()
{
    cout << "SORTING COMPLEX VECTOR " << "\n";
    vector<pair<string , vector<int>>> studentMarks = {
         {"ajay",{10,20,100}},
         {"vijay",{5,20,120}},
         {"anjali" , {10,20,121}},
         {"pappu",{100,200,300}}
    };

    sort(studentMarks.begin(),studentMarks.end(),compare);
    for(pair<string,vector<int>> x: studentMarks){
        cout << x.first << "  "<< totalMarks(x.second) << "\n";
    }

    return 0;
}