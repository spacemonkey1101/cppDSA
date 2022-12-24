#include <iostream>
using namespace std;

void printArr(int arr[][4], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

void spiralPrint(int matrix[][4], int N, int M)
{
    int start_col = 0, end_col = M - 1;
    int start_row = 0, end_row = N - 1;

    while (start_col <= end_col && start_row <= end_row)
    {
        // 1st row print
        for (int i = start_col; i <= end_col; i++)
        {
            cout << matrix[start_row][i] << " ";
        }

        // end col print
        for (int i = start_row + 1; i <= end_row; i++)
        {
            cout << matrix[i][end_col] << " ";
        }

        // end row print
        for (int i = end_col - 1; i >= 0; i--)
        {
            if (start_row == end_row)
            {
                break;
            }
            cout << matrix[end_row][i] << " ";
        }

        // 1st col print
        for (int i = end_row - 1; i >= start_row + 1; i--)
        {
            if (start_col == end_col)
            {
                break;
            }
            cout << matrix[i][start_col] << " ";
        }

        start_row++;
        end_col--;
        start_col++;
        end_row--;
    }
}

int main()
{
    int arr[][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int n = 3, m = 4;
    printArr(arr, n, m);

    cout << endl;
    cout << "Spiral Print" << endl;
    spiralPrint(arr, n, m);
}
