/*Subset Sum Queries
Given an array and N number of queries, where in each query you have to
check whether a subset whose sum is equal to given number exists in the
array or not.

Input Format
In the function two vectors num and query are passed.

Output Format
Return a bool vector of size N representing each query.

Sample Input
    num[]   = {1, 2, 3}
    query[] = {5, 3, 8}

Sample Output
    {Yes, Yes, No}

Explanation
    There is a subset with sum 5, subset is {2, 3}
    There is a subset with sum 3, subset is {1, 2}
    There is no subset with sum 8.*/

#include <iostream>
#include <vector>
#include <bitset>

using namespace std;
#define MAX 1000

vector<bool> subsetSum(vector<int> num, vector<int> query)
{
    int N = query.size();
    // your code goes here
    vector<bool> res;

    bitset<MAX> b;
    b[0] = 1;

    // for all set bits of b, a sum can be formed from num
    for (int i = 0; i < num.size(); i++)
    {
        bitset<MAX> mask = b << num[i];
        b = b | mask;
    }

    for (int i = 0; i < N; i++)
    {
        if (b[query[i]])
        {
            res.push_back(true);
        }
        else
        {
            res.push_back(false);
        }
    }
    return res;
}
int main()
{
    vector<int> num = {1, 2, 3};
    vector<int> query = {5, 3, 8};

    vector<bool> result = subsetSum(num, query);

    for (auto ans : result)
    {
        cout << ans << " ";
    }
}