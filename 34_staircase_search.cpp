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

bool staircaseSearch(int arr[][4], int n, int m, int key)
{
    int start_row = 0;
    int start_col = m - 1;

    if (key < arr[0][0] || key > arr[n - 1][m - 1])
    {
        return false;
    }

    while (start_row < n && start_col >= 0)
    {
        if (arr[start_row][start_col] == key)
        {
            return true;
        }
        else if (arr[start_row][start_col] < key)
        {
            start_row++;
        }
        else
        {
            start_col--;
        }
    }

    return false;
}

int main()
{
    // 2d array is sorted in rowwise and colwise level
    int arr[][4] = {{10, 20, 30, 40}, {15, 25, 35, 45}, {27, 29, 37, 48}};
    int n = 3, m = 4, key = 29;
    printArr(arr, n, m);

    cout << endl;
    cout << "Sorted Array search" << endl;
    if (staircaseSearch(arr, n, m, key))
    {
        cout << key << " is found " << endl;
    }
    else
    {
        cout << key << " is NOT found " << endl;
    }
}