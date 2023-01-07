/*Xoring
We are given an array containg n numbers.
All the numbers are present twice except for one number which is
only present once. Find the unique number without taking any extra
spaces and in linear time.

Input Format
An integer vector is passed in the function

Constraints
n < 10^5

Output Format
return a single integer containing the unique number

Sample Input
    { 1, 2, 3, 1, 4, 2, 3 }
Sample Output
    4
Explanation
4 is present only once*/
#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> nums = {1, 2, 3, 1, 4, 2, 3};
    int ans = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        ans = ans ^ nums[i];
    }
    cout << "The unique element is " << ans << endl;
}