#include <iostream>
using namespace std;

bool canPlace(int board[][20] , int size, int row, int col){
    // for column
    for(int i=0; i<row; i++){
        if(board[i][col] == 1){
            return false;
        }
    }

    // for left diagonal
    int i = row;
    int j = col;
    while(i >= 0 && j >= 0){
        if(board[i][j] == 1){
            return false;
        }
        i--;
        j--;
    }

    // for right diagonal
    i = row;
    j = col;
    while(i>=0 && j < size){
       if(board[i][j] == 1){
         return false;
       }
       i--;
       j++;
    }
    return true;
}

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