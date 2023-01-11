#include <iostream>
#include <vector>

using namespace std;

// void swap(vector<int> &arr, int ind1, int ind2)
// {
//     int temp = arr[ind1];
//     arr[ind1] = arr[ind2];
//     arr[ind2] = temp;
// }

int partition(vector<int> &arr, int start, int end)
{
    int pivot = end;
    int i = start - 1, j = start;
    for (int j = start; j < end; j++)
    {
        if (arr[j] < arr[pivot])
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[pivot]);
    return i + 1;
}

void quickSort(vector<int> &arr, int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }
    // partitioning the array into 2 parts
    int pivot = partition(arr, start, end);

    // quickSort on the left part of the partition
    quickSort(arr, start, pivot - 1);
    // quickSort on the right part of the partition
    quickSort(arr, pivot + 1, end);
}
int main()
{
    vector<int> arr = {10, 5, 2, 0, 7, 6, 4};
    int s = 0;
    int e = arr.size() - 1;

    cout << "Elements before sorting" << endl;
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    quickSort(arr, s, e);
    cout << "Elements after sorting" << endl;
    for (int x : arr)
    {
        cout << x << " ";
    }
}