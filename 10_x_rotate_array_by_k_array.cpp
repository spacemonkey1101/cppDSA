#include <iostream>
using namespace std;

int *kRotate(int *a, int size, int k)
{
    // your code  goes here

    for (int times = 1; times <= k; times++)
    {

        int temp = a[size - 1];
        for (int i = size - 1; i > 0; i--)
        {
            a[i] = a[i - 1];
        }
        a[0] = temp;
    }
    return a;
}

int main()
{
    int arr[] = {3, 4, -1, 5, -12};
    int size = sizeof(arr) / sizeof(int);

    cout << "The elements of the array are " << endl;
    // for each loop
    for (int x : arr)
    {
        cout << x << ",";
    }
    cout << endl;
    int *arr2 = kRotate(arr, size, 2);
    for (int i = 0; i < size; i++)
    {
        cout << arr2[i] << ",";
    }
    cout << endl;
}