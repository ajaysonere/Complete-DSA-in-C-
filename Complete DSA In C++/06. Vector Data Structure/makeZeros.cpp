#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> makeZeros(vector<vector<int>> mat){
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].size();j++){
            if(mat[i][j] == 0){
                for(int row =0 ; row<mat.size(); row++){
                    mat[row][j] = -1 ;
                }
                for(int col = 0; col < mat.size();col++){
                    mat[i][col] = -1 ;
                }
            }
        }
    }

    for(int i=0;i<mat.size();i++){
        for(int j=0; j<mat[i].size();j++){
            if(mat[i][j] == -1){
                mat[i][j] = 0;
            }
        }
    }
    return mat;
}

int main ()
{
    int rows , cols;
    cin >> rows >> cols;
    vector<vector<int>> mat;
    for(int i=0;i<rows;i++){
        vector<int> temp;
        int value;
        for(int j=0;j<cols;j++){
            cin>>value;
            temp.push_back(value);
        }
        mat.push_back(temp);
    }

    vector<vector<int>> ans = makeZeros(mat);

    for (int row = 0; row < ans.size(); row++)
    {
        for (int col = 0; col < ans[row].size(); col++)
        {
            cout << ans[row][col] << " ";
        }
        cout << "\n";
    }

    return 0;
}