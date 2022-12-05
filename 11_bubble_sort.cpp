#include <iostream>
using namespace std;

int *bubbleSort(int *a, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    return a;
}

int main()
{
    int arr[] = {3, 4, -1, 5, -12};
    int size = sizeof(arr) / sizeof(int);

    cout << "The elements of the array are " << endl;
    // for each loop
    for (int x : arr)
    {
        cout << x << ",";
    }
    cout << endl;
    int *sortedArr = bubbleSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << sortedArr[i] << ",";
    }
    cout << endl;
}