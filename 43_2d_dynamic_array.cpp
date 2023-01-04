#include <iostream>

using namespace std;

int **create2DArray(int rows, int cols)
{
    // array of pointers
    int **arr = new int *[rows];

    // allocate each row
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }

    int value = 0;
    // initialize the 2d array with a value
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = value++;
        }
    }
    return arr;
}

int main()
{
    int rows, cols;
    cout << "Enter the num of rows followed by the number of cols " << endl;
    cin >> rows >> cols;

    int **arr = create2DArray(rows, cols);

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
