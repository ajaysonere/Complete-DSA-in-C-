#include<iostream>
using namespace std;

// void printSpiralMatrix(int *arr,int row,int column){
//     int startRow = 0;
//     int endRow = row;
//     int startColumn = 0;
//     int endColumn = column;
//     // cout <<  "startColumn " << startColumn << "\n";
//     // cout << "endColumn "<< endColumn << "\n";


//     // while(){
//         for(int col = startColumn; col < endColumn; col++){
//            cout <<  *(arr+col) << " ";
//         }
//         cout << "\n";
//         for(int Row = startRow+1 ; Row < endRow; Row++){
//             cout << *(arr+2+Row) << " ";
//         }
//     // }
// }




int main ()
{
    cout << "Enter the Number of Rows and Column " << "\n";
    int row,column;
    cin >> row >> column;
    int arr[row][column];
    // taking input in 2 D array
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
             cin >> arr[i][j];
        }
    }



    // Loop For Printing Matrix in the spiral Order

    int startRow = 0;
    int endRow = row-1;
    int startColumn = 0;
    int endColumn = column-1;


    while(startRow <= endRow && startColumn <= endColumn ){

        for (int col = startColumn; col <= endColumn; col++)
        {
             cout << arr[startRow][col] << " ";
        }

        for (int Row = startRow + 1; Row <= endRow; Row++)
        {
             cout << arr[Row][endColumn] << " ";
        }

        for (int col = endColumn - 1; col >= startColumn; col--)
        {
             cout << arr[endRow][col] << " ";
        }

        for (int Row = endRow - 1; Row > startRow; Row--)
        {
             cout << arr[Row][startColumn] << " ";
        }

        startRow++;
        endRow--;
        startColumn++;
        endColumn--;
    }




    // printSpiralMatrix((int *)arr,row,column);
    return 0;
}