/*Sorting Cabs!
Given a vector of pairs representing coordinates x and y of different
cabs on a X-Y plane. Sort them according to their distance from the origin
in the non-decreasing order i.e. the cab with shortest distance from the
origin will be at first.

Input Format
In the function an integer vector of pairs is passed.

Output Format
Return an integer vector of pairs in sorted order.

Sample Input
{ (2,3), (1,2), (3,4), (2,4), (1,4) }

Sample Output
{ (1, 2), (2, 3), (1, 4), (2, 4), (3, 4) }*/
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    vector<pair<int, int>> coordinates = {{2, 3},
                                          {1, 2},
                                          {3, 4},
                                          {2, 4},
                                          {1, 4}};
    vector<int> distance;

    for (auto coord : coordinates)
    {
        distance.push_back((coord.first * coord.first) + (coord.second * coord.second));
    }

    for (int i = 0; i < distance.size(); i++)
    {
        int min = distance[i];
        int min_index = i;
        for (int j = i + 1; j < distance.size(); j++)
        {
            if (distance[j] < min)
            {
                min = distance[j];
                min_index = j;
            }
        }
        if (min_index != i)
        {
            // swap distance
            int temp = distance[i];
            distance[i] = distance[min_index];
            distance[min_index] = temp;

            // swap coordinates
            pair<int, int> temp1 = coordinates[i];
            coordinates[i] = coordinates[min_index];
            coordinates[min_index] = temp1;
        }
    }

    cout << "the result in sorted order is " << endl;
    for (auto coord : coordinates)
    {
        cout << coord.first << "," << coord.second << endl;
    }
}