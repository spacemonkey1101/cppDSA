/*Print Increasing Numbers
Given an integer N. Your task is to return an integer vector containing
numbers from 1 to N in increasing order.

Sample Input
5

Sample Output
1 2 3 4 5
*/
#include <iostream>
#include <vector>

using namespace std;

vector<int> inc(vector<int> res, int N)
{
    if (N == 0)
    {
        return res;
    }
    res = inc(res, N - 1);
    res.push_back(N);
    return res;
}

vector<int> increasingNumbers(int N)
{
    vector<int> res;
    return inc(res, N);
}

int main()
{
    vector<int> res = increasingNumbers(5);
    for (auto r : res)
    {
        cout << r << " ";
    }
}