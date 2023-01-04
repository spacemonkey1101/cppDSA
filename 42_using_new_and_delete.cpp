#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter the value of n " << endl;
    cin >> n;

    // creating a dynamic array
    int *arr = new int[n];

    // the address which is stored in stack
    cout << arr;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        arr[i] = i * 2;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // deleting the space from heap
    delete[] arr;

    // the address which is stored in stack
    cout << endl;
    cout << arr;

    return 0;
}