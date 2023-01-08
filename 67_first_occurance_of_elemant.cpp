#include <iostream>

using namespace std;
int firstOccurance(int *arr, int size, int key)
{
    if (size == 0)
    {
        return -1;
    }
    if (arr[0] == key)
    {
        return 0;
    }
    int subindex = firstOccurance(arr + 1, size - 1, key);
    if (subindex != -1)
    {
        return subindex + 1;
    }
    return -1;
}
int main()
{
    int arr[] = {1, 3, 5, 7, 6, 2};
    int key = 7;
    int size = sizeof(arr) / sizeof(int);
    int res = firstOccurance(arr, size, key);
    if (res!=-1)
    {
        cout << "The first occurance of " << key << " is in " << res;
    }
    else
    {
        cout << "The  occurance of " << key << " is NOT found";
    }
}