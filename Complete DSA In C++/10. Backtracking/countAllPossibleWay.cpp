#include <iostream>
using namespace std;

bool

int countAllPosibleWayToPlaceQueen(int board[][20] , int size , int i){
    // base case
    if(i == size){
        return 1;
    }
    // recursion 
    int count = 0 ;
    for(int j=0; j<size; j++){
        if(canPlace(board , size, i , j)){
            board[i][j] = 1;
            count += countAllPosibleWayToPlaceQueen(board , size , i+1);
            board[i][j] = 0;
        }
    }
    return count;
}

int main()
{
    // count all possible way of placing the queens in board
    int board[20][20] = {0};
    int size;
    cin >> size;
    cout << "Way to place the queen's in board " << countAllPosibleWayToPlaceQueen(board , size , 0) << "\n";
    return 0;
}