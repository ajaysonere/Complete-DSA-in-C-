#include <iostream>
using namespace std;

int main()
{

    cout << "Enter the Number of Rows  and Columns "
         << "\n";
    int row, col;
    cin >> row >> col;
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << " Output is :"
         << "\n";

    // Printing the wave element form start to end
    // for (int i = 0; i < col; i++)
    // {
    //     if (i & 1)
    //     {
    //         for (int j = row - 1; j >= 0; j--)
    //         {
    //             cout << arr[j][i] << " ";
    //         }
    //     }
    //     else
    //     {
    //         for (int j = 0; j < row; j++)
    //         {
    //             cout << arr[j][i] << " ";
    //         }
    //     }
    // }
    // cout << "\n";
    // printing the wave element form end to start
    
    for (int i = col - 1; i >= 0; i--)
    {
        if (i & 1)
        {
            for (int j = row - 1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            for (int j = 0; j < row; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
    }

    // int i=0;
    // for(i;i<4;i++){
    //     cout<< arr[i][3] << " ";
    // }
    // // cout << "i is " <<  i << "\n";
    // i=i-1;
    // for(i; i>=0; i--){
    //     cout << arr[i][2] << " ";
    // }
    // i=i+1;
    // for(i;i<4;i++){
    //     cout << arr[i][1] << " ";
    // }
    // i=i-1;
    // for(i;i>=0;i--){
    //     cout << arr[i][0] << " ";
    // }
    // // cout << "\n";

    // cout << "\n";

    return 0;
}