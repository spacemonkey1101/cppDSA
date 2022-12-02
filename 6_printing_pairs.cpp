#include <iostream>

using namespace std;

void printingPairsArray(int *arr, int size)
{
    // print unique pairs of elements formed from an array
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            cout << "( " << arr[i] << " , " << arr[j] << " ) ,";
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 4, 12, 7};
    int size = sizeof(arr) / sizeof(int);

    cout << "The elements of the array are " << endl;
    // for each loop
    for (int x : arr)
    {
        cout << x << ",";
    }
    cout << endl;

    printingPairsArray(arr, size);
    cout << endl;
}