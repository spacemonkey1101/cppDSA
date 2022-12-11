#include <iostream>
#include <algorithm>
using namespace std;

bool compare(int a, int b)
{
    return a < b;
}
int main()
{
    int arr[] = {7, 5, 4, -1, -12, 30};
    int size = sizeof(arr) / sizeof(int);

    cout << "The elements of the array are " << endl;
    // for each loop
    for (int x : arr)
    {
        cout << x << ",";
    }
    cout << endl;

    sort(arr, arr + size);
    cout << "The elements of the sorted array are " << endl;

    for (int x : arr)
    {
        cout << x << ",";
    }
    cout << endl;
    reverse(arr, arr + size);
    cout << "The elements of the reverse sorted array are " << endl;

    for (int x : arr)
    {
        cout << x << ",";
    }
    cout << endl;

    cout << "Sorted array using comparators function" << endl;

    // note compare is not a function call, function is passed as a parameter
    // compare is determining how the sort happens
    sort(arr, arr + size, compare);
    for (int x : arr)
    {
        cout << x << ",";
    }
    cout << endl;
}