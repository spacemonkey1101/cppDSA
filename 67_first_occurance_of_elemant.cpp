#include <iostream>

using namespace std;
int *firstOccurance(int *arr, int size, int key)
{
    if (size == 0)
    {
        return NULL;
    }
    if (arr[0] == key)
    {
        return arr;
    }
    firstOccurance(arr + 1, size - 1, key);
}
int main()
{
    int arr[] = {1, 3, 5, 77, 6, 2};
    int key = 7;
    int size = sizeof(arr) / sizeof(int);
    int *res = firstOccurance(arr, size, key);
    if (res)
    {
        cout << "The first occurance of " << key << " is in " << res - arr;
    }
    else
    {
        cout << "The  occurance of " << key << " is NOT found";
    }
}