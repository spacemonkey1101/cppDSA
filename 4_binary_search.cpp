#include <iostream>

using namespace std;

int binarySearch(int *arr, int size, int key)
{
    int l = 0, r = size - 1;

    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 4, 12, 45, 66, 77,90};
    int size = sizeof(arr) / sizeof(int);
    int key;

    cout << "Enter the key you want to search" << endl;
    cin >> key;

    int key_index = binarySearch(arr, size, key);
    if (key_index == -1)
    {
        cout << key << " cannot be found on array" << endl;
    }
    else
    {
        cout << key << " is found on array at index " << key_index << endl;
    }
}