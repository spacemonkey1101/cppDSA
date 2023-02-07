#include <iostream>

using namespace std;

int rotateSearch(int *arr, int s, int e, int key)
{
    // this is a modified binary search
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[s] <= arr[mid])
        {
            // line 1
            if (arr[s] <= key && key <= arr[mid])
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        else if (arr[mid] <= arr[e])
        {
            // line 2
            if (arr[mid] <= key && key <= arr[e])
            {
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }
    }
    return -1;
}

int main()
{
    int arr[] = {4, 5, 6, 7, 0, 1, 2, 3};
    int key = 0;
    int index = rotateSearch(arr, 0, (sizeof(arr) / sizeof(int)) - 1, key);
    if (index == -1)
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << key << " found at " << index << endl;
    }
    return 0;
}