
#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

void helper(vector<int> &nums, vector<int> output, int i, set<vector<int>> &setAns)
{
    // base case
    if (i == nums.size())
    {
        sort(output.begin(), output.end());
        setAns.insert(output);
        return;
    }
    // recursive case
    //  include ith number
    output.push_back(nums[i]);
    helper(nums, output, i + 1, setAns);

    // exclude ith char
    output.pop_back();
    helper(nums, output, i + 1, setAns);
}
vector<vector<int>> uniqueSubsets(vector<int> nums)
{
    set<vector<int>> setAns;
    vector<int> output;
    helper(nums, output, 0, setAns);

    vector<vector<int>> result;
    for (auto x : setAns)
    {
        result.push_back(x);
    }

    return result;
}

int main()
{
    vector<int> input = {1, 2, 2};
    vector<vector<int>> res = uniqueSubsets(input);

    for (auto x : res)
    {
        for (auto y : x)
        {
            cout << y << " ";
        }
        cout << endl;
    }
}