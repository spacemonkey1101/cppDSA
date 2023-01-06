/*Sort Fruits!
Given a vector of pairs of a string and an integer representing names
and prices of different fruits. A string is also passed as a parameter
with name equals either "price", meaning you have to sort the fruits
on the basis of their price or "name", which means you have to sort the
fruit on the basis of their name.

Input Format
In the function an integer vector of pairs is passed.

Output Format
Return an integer vector of pairs in sorted order.

Sample Input
    { (Mango,100), (Guava,70), (Grapes,40), (Apple,60), (Banana,30) }, S = "price"

Sample Output
    { ("Banana", 30), ("Grapes", 40), ("Apple", 60), ("Guava", 70), ("Mango", 100) }*/

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int compare(pair<string, int> f1, pair<string, int> f2)
{
    return f1.second < f2.second;
}

vector<pair<string, int>> sortFruits(vector<pair<string, int>> v, string S)
{
    // your code  goes here
    if (S.compare("name") == 0)
    {
        sort(v.begin(), v.end());
    }
    else
    {
        sort(v.begin(), v.end(), compare);
    }
    return v;
}
int main()
{
    vector<pair<string, int>> v = {
        {"Papaya", 100},
        {"Apple", 150},
        {"Banana", 50},
        {"Grapes", 70}};

    vector<pair<string, int>> res = sortFruits(v, "name");
    cout << "sorting lexographically" << endl;
    for (auto fruit : res)
    {
        cout << fruit.first << " " << fruit.second << endl;
    }
    vector<pair<string, int>> res2 = sortFruits(v, "price");
    cout << "sorting price " << endl;
    for (auto fruit : res2)
    {
        cout << fruit.first << " " << fruit.second << endl;
    }
}