#include <iostream>
using namespace std;
void optimizedBubbleSort(int *v, int size)
{
    bool swap = false;
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1 - i; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap = true;
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
        if (swap == false)
        {
            break;
        }
    }
}

int main()
{
    int arr[] = {3, 4, 5, 12};
    int size = sizeof(arr) / sizeof(int);

    cout << "The elements of the array are " << endl;
    // for each loop
    for (int x : arr)
    {
        cout << x << ",";
    }
    cout << endl;
    optimizedBubbleSort(arr, size);
    for (int x : arr)
    {
        cout << x << ",";
    }
    cout << endl;
}