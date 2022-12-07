#include <iostream>
using namespace std;

void selectionSort(int *a, int size)
{
    int min_index;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                min_index = j;
            }
        }

        if (i != min_index)
        {
            int temp = a[min_index];
            a[min_index] = a[i];
            a[i] = temp;
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