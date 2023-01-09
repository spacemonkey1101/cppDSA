#include <iostream>
#include <vector>

using namespace std;
void merge(vector<int> &arr, int start, int end)
{
    int i = start;
    int mid = (start + end) / 2;
    int j = mid+1;

    vector<int> temp;
    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
        // loop will break when one of the sub array are exhausted
    }
    // copy remaining elements from the left part
    while (i <= mid)
    {
        temp.push_back(arr[i++]);
    }
    // copy remianing elements from the right part
    while (j <= end)
    {
        temp.push_back(arr[j++]);
    }

    // copy back element from temp array to the original array
    int k = 0;
    for (int i = start; i <= end; i++)
    {
        arr[i] = temp[k++];
    }
}

void mergeSort(vector<int> &arr, int start, int end)
{
    // base case
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;
    // mergesort on the left part
    mergeSort(arr, start, mid);
    // mergesort on the right part
    mergeSort(arr, mid+1, end);

    // function that merges 2 arrays into a single array
    return merge(arr, start, end);
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

    mergeSort(arr, s, e);
    cout << "Elements after sorting" << endl;
    for (int x : arr)
    {
        cout << x << " ";
    }
}