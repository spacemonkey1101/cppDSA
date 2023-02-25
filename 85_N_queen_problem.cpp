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
bool isSafe(int arr[][MAX_SIZE], int n, int row, int col)
{
    // check if its safe to place a queen at row,col in arr

    // check attack from column
    for (int k = 0; k < row; k++)
    {
        if (arr[k][col] == 1)
        {
            return false;
        }
    }
    // check attack from left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (arr[i][j] == 1)
        {
            return false;
        }
    }
    // check attack from right diagonal
    for (int i = row, j = col; i >= 0 && j < n; i--, j++)
    {
        if (arr[i][j] == 1)
        {
            return false;
        }
    }
    // if the above attacks are safe
    return true;
}
bool n_queen_prob(int arr[][MAX_SIZE], int n, int row)
{
    // base case
    if (row == n)
    {
        cout << "All rows traversed" << endl;
        // print the board
        printBoard(arr, n);
        return true;
    }
    // recursive case
    // try to place a queen in every row
    for (int col = 0; col < n; col++)
    {
        // check if i,j is safe or not
        if (isSafe(arr, n, row, col))
        {
            arr[row][col] = 1;
            bool subproblem_success = n_queen_prob(arr, n, row + 1);
            if (subproblem_success)
            {
                return true;
            }
            // backtrack
            arr[row][col] = 0;
        }
    }
    return false;
}

int main()
{
    int arr[MAX_SIZE][MAX_SIZE] = {0}, n;
    cin >> n;
    if (n_queen_prob(arr, n, 0))
    {
        cout << "Problem is solvable" << endl;
    }
    else
    {
        cout << "Problem is not solvable" << endl;
    }
}