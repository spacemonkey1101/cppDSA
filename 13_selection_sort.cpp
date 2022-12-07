#include <iostream>
using namespace std;

void selectionSort(int *a, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

int main()
{
    int arr[] = {7, 5, 4, -1, -12, 30};
    int size = sizeof(arr) / sizeof(int);

    cout << "The elements of the array are " << endl;
    // for each loop
    for (int x : arr)
    {
        cout << x << ",";
    }
    cout << endl;
    selectionSort(arr, size);

    cout << "The elements of the sorted array are " << endl;

    for (int x : arr)
    {
        cout << x << ",";
    }
    cout << endl;
}