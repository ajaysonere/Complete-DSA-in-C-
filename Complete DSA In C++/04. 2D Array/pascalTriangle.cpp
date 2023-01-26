#include<iostream>
#include<vector>
using namespace std;

vector<vector<int>> pascalTriangle(int n){

    vector<vector<int>>pascal(n);

    for(int row=0; row<n; row++){
        pascal[row].resize(row+1);
        for(int col = 0; col < row+1; col++){
             if(col == 0 || col == row){
                pascal[row][col] = 1;
             }else{
                pascal[row][col] = pascal[row-1][col] + pascal[row-1][col-1];
             }
        }
    }


    return pascal;
}

int main ()
{
 
 int n;
 cin >> n;
 vector<vector<int>>ans ;
 ans  = pascalTriangle(n);
//  cout << ans.size();

 for(int i=0; i< ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout << ans[i][j] << " ";
    }
    cout << "\n";
 }
 return 0;
}