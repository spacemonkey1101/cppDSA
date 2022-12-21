#include <bits/stdc++.h>
using namespace std;

bool arePermutation(string A, string B)
{
    // your code goes here
    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    if (A.compare(B) == 0)
    {
        return true;
    }

    return false;
}

int main()
{
    string A = "o draconian evil";
    string B = "leonardo da vinci";

    if (arePermutation(A, B))
    {
        cout << "Yes they are anagram" << endl;
    }
    else
    {
        cout << "no they are not" << endl;
    }
}