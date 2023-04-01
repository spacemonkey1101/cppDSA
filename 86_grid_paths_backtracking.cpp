#include <iostream>

using namespace std;

int grid_ways(int i, int j, int m, int n)
{
    if (i == m-1 && j == n-1)
    {
        return 1;
    }

    if (i >= m || j >= n)
    {
        return 0;
    }

    int ans = grid_ways(i + 1, j, m, n) + grid_ways(i, j + 1, m, n);
    return ans;
}

int main()
{
    cout << grid_ways(0, 0, 3, 3);
}