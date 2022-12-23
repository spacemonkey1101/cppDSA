#include <iostream>
#include <string>
#include<bits/stdc++.h>

using namespace std;

string removeDuplicate(string s)
{
    // your code goes here
    sort(s.begin(), s.end());
    string res;
    int count = 0;
    res += s[0];
    for (int i = 1; i < s.size(); i++)
    {
        if (res[count] != s[i])
        {
            res += s[i];
            count++;
        }
    }
    cout << res << endl;
    return res;
}

int main()
{
    cout << removeDuplicate("geeksforgeeks");
}