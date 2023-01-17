/*All Occurence!
You are given an integer array of size N. Your aim is to find all the
occurrences (indices) of a given element.

Input format:
Vector V and integer k (to find) are passed as parameters.

Output parameter:
Return a vector of integers containing all the indices in sorted manner.

Sample Input:
3
1 2 5 3 1 2 3 8 6 3 6 7 9

Sample Output:
3 6 9
*/

#include <iostream>
#include <vector>

using namespace std;

void helper(int k, int i, vector<int> &v, vector<int> &res)
{
    if (v.size() == i)
    {
        return;
    }
    if (v[i] == k)
    {
        res.push_back(i);
    }
    helper(k, i + 1, v, res);
    return;
}

vector<int> findAllOccurences(int k, vector<int> v)
{
    vector<int> res;
    helper(k, 0, v, res);
    return res;
}

int main()
{
    vector<int> v = {1,
                     2,
                     5,
                     3,
                     1,
                     2,
                     3,
                     8,
                     6,
                     3,
                     6,
                     7,
                     9};
    int key = 3;
    vector<int> res = findAllOccurences(key, v);
    cout << "The indices are ";
    for (auto x : res)
    {
        cout << x << " ";
    }
    return 0;
}