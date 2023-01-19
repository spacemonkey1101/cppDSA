/*
Binary Strings!
You are given an integer N. Your task is to print all binary strings
of size N without consecutive ones.

Constraints:
N<=12

Input Format
In the given function an integer N is passed as parameter.

Output Format
Return a vector of strings, with all possible strings in a sorted order.

Sample Input
    3

Sample Output
    000
    001
    010
    100
    101
*/
#include <iostream>
#include <vector>

using namespace std;
void solvehelper(vector<string> &ans, int n, char last_char = 'X', string cur_word = "")
{

    if (n == 0)
    {
        ans.push_back(cur_word);
        return;
    }

    if (last_char == '1')
    {
        string cur_word_copy = cur_word;
        cur_word_copy.push_back('0');
        solvehelper(ans, n - 1, '0', cur_word_copy);
    }
    else
    {
        string cur_word_copy = cur_word;
        cur_word_copy.push_back('0');
        solvehelper(ans, n - 1, '0', cur_word_copy);
        cur_word_copy.pop_back();
        cur_word_copy.push_back('1');
        solvehelper(ans, n - 1, '1', cur_word_copy);
    }
}

vector<string> binaryStrings(int n)
{
    // do not modify any default function or parameter you can use helper function if needed

    vector<string> res;
    solvehelper(res, n);
    return res;
}

int main()
{
    int num;
    cout << "Enter the length of each string " << endl;
    cin >> num;

    vector<string> res = binaryStrings(num);

    for (auto x : res)
    {
        cout << x << " ";
    }
}