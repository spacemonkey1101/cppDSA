#include <iostream>

using namespace std;

int maxSumSubarrayPrefix(int *A, int size)
{
    int maxSubArraySum = A[0], currentSum = 0;
    int cumSum[size];
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += A[i];
        cumSum[i] = sum;
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            currentSum = i > 0 ? (cumSum[j] - cumSum[i - 1]) : cumSum[j];
            maxSubArraySum = max(currentSum, maxSubArraySum);
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
    cout << maxSumSubarrayPrefix(arr, size) << endl;
}