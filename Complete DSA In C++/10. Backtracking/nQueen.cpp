#include<iostream>
using namespace std;

void printBoard(int size , int board[][20]){
    for(int i=0; i<size; i++){
        for(int j=0; j<size; j++){
            cout << board[i][j] << " ";
        }
        cout << "\n";
    }
}

bool canPlace(int board[][20] , int size , int row, int col){
    // for column checking
    for(int i=0; i<row; i++){
        if(board[i][col] == 1){
            return false;
        }
    }
    // for left diagonal checking
    int i = row;
    int j = col;
    while(i>=0 && j >= 0){
        if(board[i][j] == 1){
            return false;
        }
        i--;
        j--;
    }

    // for right diagonal checking
    i = row; 
    j = col;
    
    while(i >= 0 && j<= col){
        if(board[i][j] == 1){
            return false;
        }
        i--;
        j++;
    }

    // if eveything is correct
    return true;
}


bool nQueenProblem(int size , int board[][20], int i){
    // baseCase 
    if(i==size){
        printBoard(size , board);
        return true;
    }
   // Recursion on basic 
   for(int j=0; j<size; j++){
      if(canPlace(board , size, i, j)){
        board[i][j] = 1;
        bool success = nQueenProblem(size , board , i+1);
        if(success){
            return true;
        }
        // backtracking step
        board[i][j] = 0;
      }
   }
   return false;
}

int main ()
{
    int board[20][20] = {0};
    int size;
    cin >> size;
    bool result = nQueenProblem(size , board , 0);
    return 0;
}