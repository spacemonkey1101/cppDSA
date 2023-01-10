/*
Binary Search using Recursion!

Given a sorted array, return the index of an element x in the array.
Use binary search to find the element in the array !
Return -1 if the element is not present.

Input Format
In the function an integer vector  is passed.

Output Format
Return an integer denoting index of the element to be find.

Sample Input
    {1, 3, 5, 7, 9}, x = 3

Sample Output
    1

Explanation
    3 is present at index 2.
*/

#include <iostream>
#include <vector>

using namespace std;
int search(vector<int> arr, int l, int r, int key)
{
    if (r < l)
    {
        return -1;
    }

    int mid = (l + r) / 2;
    if (arr[mid] == key)
    {
        return mid;
    }
    else if (arr[mid] > key)
    {
        return search(arr, l, mid - 1, key);
    }
    else
    {
        return search(arr, mid + 1, r, key);
    }
}

int binarySearch(vector<int> arr, int key)
{
    return search(arr, 0, arr.size(), key);
}
int main()
{
    vector<int> arr = {1, 4, 5, 66, 9};
    int key = 6;
    int res = binarySearch(arr, key);
    if (res == -1)
    {
        cout << key << " could NOT be found" << endl;
    }
    else
    {
        cout << key << " is found at " << res << endl;
    }
}