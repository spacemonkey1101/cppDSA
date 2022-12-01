#include <iostream>

using namespace std;

int linearSearch(int *arr, int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 44, 12, 45, 66, 13, 17, 77, 3};
    int size = sizeof(arr) / sizeof(int);
    int key;

    cout << "Enter the key you want to search" << endl;
    cin >> key;

    int key_index = linearSearch(arr, size, key);
    if (key_index == -1)
    {
        cout << key << " cannot be found on array" << endl;
    }
    else
    {
        cout << key << " is found on array at index " << key_index << endl;
    }
}