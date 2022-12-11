#include <iostream>
using namespace std;

void insertionSort(int *a, int size)
{
    for (int i = 1; i < size; i++)
    {
        int current_element = a[i];
        int previous_index = i - 1;
        while (previous_index >= 0 &&  a[previous_index] > current_element)
        {
            a[previous_index + 1] =  a[previous_index];
            previous_index-=1;
        }
        a[previous_index + 1 ] = current_element;
    }
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
    insertionSort(arr, size);

    cout << "The elements of the sorted array are " << endl;

    for (int x : arr)
    {
        cout << x << ",";
    }
    cout << endl;
}