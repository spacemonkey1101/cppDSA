#include <iostream>

using namespace std;

void printingSubArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " , ";
            }
            cout << endl;
        }
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

    printingSubArray(arr, size);
    cout << endl;
}