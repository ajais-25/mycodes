#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row, col;
    cout << "Enter the no of rows" << endl;
    cin >> row;

    //dynamic allocation
    int **arr = new int*[row];
    int *sizes = new int[row];
    for(int i = 0; i<row; i++)
    {
        cout << "Enter the no of columns for row " << i+1 << endl;
        cin >> col;
        arr[i] = new int[col];
        sizes[i] = col;
        cout << "Enter the array elements for row " << i+1 << endl;
        for(int j = 0; j<col; j++)
            cin >> arr[i][j];
    }

    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<sizes[i]; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }

    for(int i = 0; i<row; i++)// deleting the array
        delete []arr[i];

    delete []arr;
    delete[]sizes;
}