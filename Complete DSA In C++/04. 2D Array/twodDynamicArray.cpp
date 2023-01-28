#include<iostream>
using namespace std;
int** print2DArray(int ** (&arr),int rows,int cols){
    cout <<"Inside a function " << "\n";
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
           arr[i][j] = (arr[i][j])*2;
        }
    }
    return arr;
}

int main ()
{
    // cout << "2 D Dynamic Array :" << "\n";
    int rows, cols;
    cin >> rows >> cols;
    int ** arr = new int*[rows];

    for(int i=0;i<rows;i++){
        arr[i] = new int[cols];
        for(int j=0;j<cols;j++){
            cin>> arr[i][j];
        }
    }

    // int x {};
    // cout << x << "\n";
    
    // 2D array will be 
    int**ans  = print2DArray(arr,rows,cols);

    cout << "inside main function " << "\n";

    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout << ans[i][j] <<  " ";
        }
        cout <<"\n";
    }


    // deallocate the memeory

    for(int i=0;i<rows;i++){
        delete [] arr[i];
    }
    delete [] arr;
    return 0;
}