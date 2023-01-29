#include<iostream>
#include<vector>
using namespace std;

// This will take 

vector<vector<int>> rotate90Deg(vector<vector<int>> matrix){
    vector< vector<int>> temp(matrix.size(),vector<int>(matrix[0].size()));
    int index = matrix.size()-1;
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix[i].size(); j++){
            temp[j][index] = matrix[i][j];
        }
        index--;
    }
    return temp;
}

int main ()
{
    int rows ,cols;
    cin >> rows >> cols;

    vector<vector<int>> matrix;

    for(int i=0;i<rows;i++){
        vector<int>temp;
        int value;
        for(int j=0;j<cols;j++){
            cin>> value;
            temp.push_back(value);
        }
        matrix.push_back(temp);
    }

    vector<vector<int>> ans  = rotate90Deg(matrix);

    // printing the ans 
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}