#include <iostream>
#define MAX_SIZE 20
using namespace std;

void printBoard(int arr[][MAX_SIZE], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
bool isSafe(int arr[][MAX_SIZE], int n, int i, int j)
{
    // safe from top
    for (int k = 0; k < i; k++)
    {
        if (arr[k][j] == 1)
        {
            return false;
        }
    }
    // safe from left diagonal
    for (int r = i - 1, c = j - 1; r >= 0 && c >= 0; r--, c--)
    {
        if (arr[r][c] == 1)
        {
            return false;
        }
    }

    // safe from right diagonal
    for (int r = i - 1, c = j + 1; r >= 0 && c < n; r--, c++)
    {
        if (arr[r][c] == 1)
        {
            return false;
        }
    }
    return true;
}
bool nqueen(int arr[][MAX_SIZE], int n, int i)
{
    // base case
    if (i == n)
    {
        printBoard(arr, n);
        cout << endl;
        return true;
    }
    // rec case
    for (int j = 0; j < n; j++)
    {
        if (isSafe(arr, n, i, j))
        {
            arr[i][j] = 1;
            nqueen(arr, n, i + 1);
            arr[i][j] = 0;
        }
    }
    return false;
}
int main()
{

    int arr[MAX_SIZE][MAX_SIZE] = {0}, n;
    cin >> n;
    nqueen(arr, n, 0);
    return 0;
}