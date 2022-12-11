/*Given N sticks and an array length where each length[i] represents length of each stick. Your task is to make maximum number of pairs of these sticks such that the difference between the length of two sticks is at most D. A stick can't be part of more than one pair of sticks.

Input Format
In the function an integer vector length and number D is passed.

Output Format
Return an integer representing total number of such pairs.

Sample Input
    {1, 3, 3, 9, 4}, x = 2
Sample Output
    2
Explanation

    (1st, 3rd) and (2nd, 5th) can be paired together.*/

#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int pairSticks(vector<int> length, int D)
{
    vector<int> usedUp(length.size(), 0);

    int counter = 0;
    for (int i = 0; i < length.size(); i++)
    {
        for (int j = i + 1; j < length.size(); j++)
        {
            if (abs((length[i] - length[j]) <= D) && usedUp[j] == 0 && usedUp[i] == 0)
            {
                counter++;
                usedUp[j] = 1;
                usedUp[i] = 1;
            }
        }
    }
    return counter;
}

int main()
{
    vector<int> v = {1, 3, 3, 9, 4};

    cout << pairSticks(v, 2);
}