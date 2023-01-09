/*Tiling Problem!

You are given N tiles of size 1 x M, There is a floor of size N x M
which you have to cover with tiles. Find the number of ways the floor
can be completely covered if you can place the tiles in both horizontal
and vertical manner.

Input Format:
In the function, two integers N and M are passed.

Output Format:
Return a single integer denoting the number of ways.

Sample Input:4 3

Sample Output:3
*/
#include <iostream>

using namespace std;

int tillingProblem(int n, int m)
{
    if (n == 1 || n < m)
    {
        return 1;
    }
    if (n == m)
    {
        return 2;
    }
    return tillingProblem(n - 1, m) + tillingProblem(n - m, m);
}

int main()
{
    int n, m;
    cout << "Enter the dimension NXM of the board" << endl;
    cin >> n >> m;

    cout << "Number of ways to tile using " << m << "X1 tile is " << tillingProblem(n, m);
}