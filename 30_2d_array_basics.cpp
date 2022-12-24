#include <iostream>
using namespace std;
void printArray(int arr[][100], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << ",";
        }
        cout << endl;
    }
}

int main()
{
    int arr[100][100];
    int m, n;

    cout << "Enter the number of rows and columns" << endl;
    cin >> m >> n;

    cout << "Enter the elements one by one" << endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    printArray(arr, m, n);
}