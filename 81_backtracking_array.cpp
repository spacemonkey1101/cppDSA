#include <iostream>

using namespace std;

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void fillArray(int *arr, int i, int n)
{
    // base case
    if (i == n)
    {
        printArray(arr, n);
        return;
    }
    arr[i] = i + 1;
    // recursive case
    fillArray(arr, i + 1, n);
    // backtracking step
    arr[i] = arr[i] * -1;
}

int main()
{
    // initializing all elements to 0
    int arr[100] = {0};
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    fillArray(arr, 0, n);
    printArray(arr, n);

    return 0;
}