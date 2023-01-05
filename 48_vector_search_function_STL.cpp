#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool comparator(int i, int j) {
    return i == j;
}
int main()
{
    vector<int> haystack = {10, 20, 30, 40, 50, 60, 70};
    vector<int> needle = {20, 30, 40};

    vector<int>::iterator it = search(haystack.begin(), haystack.end(), needle.begin(), needle.end());

    if (it != haystack.end())
    {
        cout << "needle is found at " << it - haystack.begin() << endl;
    }
    else
    {
        cout << "needle cannot be found " << endl;
    }

    int needle2[] = {50, 60};
    // we are using a comparator function and using an array needle
    vector<int>::iterator it2 = search(haystack.begin(), haystack.end(), needle2, needle2 + 2, comparator);
    if (it2 != haystack.end())
    {
        cout << "needle is found at " << it2 - haystack.begin() << endl;
    }
    else
    {
        cout << "needle cannot be found " << endl;
    }
}