#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
bool comparator(string a, string b)
{
    if (a.length() == b.length())
    {
        return a < b; // lexographically
    }
    return a.length() < b.length();
}
void printCharArray(char *arr)
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void subset(char *input, char *output, int i, int j, vector<string> &res)
{
    // base case
    if (input[i] == '\0')
    {
        if (output[0] == '\0')
        {
            cout << "null";
        }
        output[j] = '\0';
        // converting character array to string
        string temp = string(output);
        res.push_back(temp);
        printCharArray(output);
        return;
    }
    // recursive case
    // include ith char
    output[j] = input[i];
    subset(input, output, i + 1, j + 1, res);

    // exclude ith char
    output[j] = '\0';
    subset(input, output, i + 1, j, res);
}

int main()
{
    char input[100], output[100];
    cin >> input;

    vector<string> res;
    subset(input, output, 0, 0, res);
    // sorting the vector using a custom comparator
    sort(res.begin(), res.end(), comparator);
    for (auto x : res)
    {
        cout << x << " ";
    }
}