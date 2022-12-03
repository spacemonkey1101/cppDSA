#include <iostream>

using namespace std;

int maxSumSubarray(int *A, int size)
{
    // this is a O(N^3) solution
    int maxSubArraySum = A[0];
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            int currentSubArraySum = 0;
            for (int k = i; k <= j; k++)
            {
                currentSubArraySum += A[k];
            }
            if (currentSubArraySum > maxSubArraySum)
            {
                maxSubArraySum = currentSubArraySum;
            }
        }
    }
    return maxSubArraySum;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 2, 3};
    int size = sizeof(arr) / sizeof(int);

    cout << "The elements of the array are " << endl;
    // for each loop
    for (int x : arr)
    {
        cout << x << ",";
    }
    cout << endl;
    cout << maxSumSubarray(arr, size) << endl;
}