#include <iostream>

using namespace std;

bool isArraySorted(int *arr, int size)
{
    if (size == 1 || size == 0)
    {
        return true;
    }
    else if (arr[size - 1] < arr[size - 2])
    {
        return false;
    }
    return isArraySorted(arr, size - 1);
}

int main()
{
    int sort_arr[] = {1, 3, 5, 6, 8};
    int rand_arr[] = {5, 4, 1, 3, 2};

    int size = sizeof(sort_arr) / sizeof(int);

    if (isArraySorted(sort_arr, size))
    {
        cout << "the array is sorted " << endl;
    }
    else
    {
        cout << "the array is NOT sorted " << endl;
    }

    if (isArraySorted(rand_arr, size))
    {
        cout << "the array is sorted " << endl;
    }
    else
    {
        cout << "the array is NOT sorted " << endl;
    }
}