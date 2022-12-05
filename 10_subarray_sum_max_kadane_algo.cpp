#include <iostream>

using namespace std;

int maxSumSubarrayKadaneAlgo(int *A, int size)
{
    // time taken here is O(N)
    int maxSum = 0, currentSum = 0;
    for (int i = 0; i < size; i++)
    {
        if ((currentSum + A[i]) < 0)
        {
            currentSum = 0;
            continue;
        }
        currentSum = currentSum + A[i];
        maxSum = max(currentSum, maxSum);
    }
    return maxSum;
}
int main()
{
    int arr[] = {-2, 100, -1,3, 4, -1, 5, -12, 6, 1, 3};
    int size = sizeof(arr) / sizeof(int);

    cout << "The elements of the array are " << endl;
    // for each loop
    for (int x : arr)
    {
        cout << x << ",";
    }
    cout << endl;
    cout << maxSumSubarrayKadaneAlgo(arr, size) << endl;
}