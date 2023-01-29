#include<iostream>
#include<vector>
using namespace std;

void transposeMatrix (vector<vector<int>> &mat){
    int size = mat.size();
    for(int row =0; row <size; row++){
        for(int col = 0; col <row; col++){
            swap(mat[row][col], mat[col][row]);
        }
    }
}
int main ()
{
    // cout << "Transpose Of Matrix " << "\n";
    int rows,cols;
    cin >> rows >> cols;
    vector<vector<int>> vec;

    // cout << vec.size() << vec[0].size() << "\n";
    for (int i = 0; i < rows; i++)
    {
        vector<int> temp;
        int value;
        for (int j = 0; j < cols; j++)
        {
            cin >> value;
            temp.push_back(value);
        }
        vec.push_back(temp);
    }

    cout << "Transpose of Matrix " << "\n";
    transposeMatrix(vec);
    for(int i=0;i< vec.size(); i++){
        for(int j=0; j<vec.size();j++){
            cout << vec[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}