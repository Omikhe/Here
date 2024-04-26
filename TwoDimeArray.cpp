#include <iostream>
using namespace std;
int main()
{
    // double arraySize(double twoDimearr[2][2]);
    double arr[3][4];
    // double arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};

    // number of rows
    int rowNum = sizeof(arr) / sizeof(arr[0]);
    // cout << "rows: " << rowNum << endl;

    // number of columns
    int colNum = sizeof(arr) / sizeof(arr[0][0]);
    // cout << "columns: " << colNum << endl;

    // cout << "elements per row: " << colNum / rowNum << endl;
    // cout << "  " << endl;
    // cout << "  " << endl;
    int n = colNum / rowNum;

    for (int i = 0; i < rowNum; i++)
    {
        cout << "row: " << i << endl;
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < rowNum - 1; i++)
    {
        for (int j = 0; j < ((colNum - rowNum) - 1); j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;

    return 0;
}