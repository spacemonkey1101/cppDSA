#include <iostream>

using namespace std;

int lastOccurance(int *arr, int size, int key)
{
    if (size == 0)
    {
        return -1;
    }
    if (arr[size - 1] == key)
    {
        return size - 1;
    }
    lastOccurance(arr, size - 1, key);
}

int main()
{
    int arr[] = {1, 3, 5, 6, 2};
    int key = 7;
    int size = sizeof(arr) / sizeof(int);
    int res = lastOccurance(arr, size, key);
    if (res != -1)
    {
        cout << "The first occurance of " << key << " is in " << res;
    }
    else
    {
        cout << "The  occurance of " << key << " is NOT found";
    }
}