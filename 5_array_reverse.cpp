#include <iostream>

using namespace std;

void swapElement(int *arr, int index1, int index2)
{
    int temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

void reverseArray(int *arr, int size)
{
    // the array reversal should happen in-place

    for (int i = 0; i < size / 2; i++)
    {
        if (arr[i] == arr[size - 1 - i])
        {
            continue;
        }
        swapElement(arr, i, size - 1 - i);
    }
}

int main()
{
    int arr[] = {1, 2, 4, 12, 45, 66, 77, 90, 31, 45, 40, 40, 30};
    int size = sizeof(arr) / sizeof(int);

    reverseArray(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << ", ";
    }
    cout << endl;
}