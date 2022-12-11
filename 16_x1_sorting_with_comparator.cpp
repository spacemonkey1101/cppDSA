#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

bool compareTrue(int a, int b)
{
    return a < b;
}

bool compareFalse(int a, int b)
{
    return b < a;
}

vector<int> sortingWithComparator(vector<int> a, bool flag)
{
    // your code  goes here

    if (flag)
    {
        sort(a.begin(), a.end(), compareTrue);
    }
    else
    {
        sort(a.begin(), a.end(), compareFalse);
    }
    return a;
}

int main()
{
    vector<int> v = {88, 96, 78, 88, 20, 15, -5, 6};

    vector<int> res = sortingWithComparator(v, true);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << ", ";
    }
    cout << endl;

    res = sortingWithComparator(v, false);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << ", ";
    }
    cout << endl;
}