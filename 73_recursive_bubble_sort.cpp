#include <iostream>

using namespace std;

void bubbleSortRec(int a[], int size)
{
    if (size == 1)
    {
        return;
    }

    // inner loop + swapping
    for (int j = 0; j < size - 1; j++)
    {
        if (a[j] > a[j + 1])
        {
            int temp = a[j];
            a[j] = a[j + 1];
            a[j + 1] = temp;
        }
    }
    bubbleSortRec(a, size - 1);
}
// completely recursive solution
void bubbleSortRec2(int a[], int n, int j)
{
    // base case stays the same
    if (n == 1)
    {
        return;
    }

    // making inner loop a recursive call
    if (j == (n - 1))
    {
        bubbleSortRec2(a, n - 1, 0);
        return;
    }

    // swap
    if (a[j] > a[j + 1])
    {
        swap(a[j], a[j + 1]);
    }

    bubbleSortRec2(a, n, j + 1);
}
// there is no advantage of recursive bubble sort
// this is for learning only
int main()
{
    int arr[] = {1, 4, 5, 2, 3};
    int size = sizeof(arr) / sizeof(int);

    cout << "before sort " << endl;
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
    // bubbleSortRec(arr, size);
    bubbleSortRec2(arr, size, 0);
    cout << "after sort " << endl;
    for (int x : arr)
    {
        cout << x << " ";
    }
}