#include <iostream>
using namespace std;

int *bubbleSort(int *a, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
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
    int *sortedArr = bubbleSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << sortedArr[i] << ",";
    }
    cout << endl;
}