#include <iostream>
#include <vector>
#include <utility>
using namespace std;

vector<pair<int, int>> swap(vector<pair<int, int>> v, int pos1, int pos2)
{
    pair<int, int> temp = v[pos1];
    v[pos1] = v[pos2];
    v[pos2] = temp;
    return v;
}

vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v)
{
    int N = v.size();
    // your code goes here

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1 - i; j++)
        {
            if (v[j].first >= v[j + 1].first)
            {
                if (v[j].first == v[j + 1].first)
                {

                    if (v[j].second > v[j + 1].second)
                    {
                        v = swap(v, j, j + 1);
                    }
                }

                if (v[j].first > v[j + 1].first)
                {
                    v = swap(v, j, j + 1);
                }
            }
        }
    }
    return v;
}

int main()
{
    vector<pair<int, int>> v = {make_pair(1, 1), make_pair(3, 1), make_pair(2, 2), make_pair(2, 3)};
    vector<pair<int, int>> r = sortCartesian(v);

    cout << "Original cartesian pairs " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << " (" << v[i].first << " , " << v[i].second << ") ";
    }
    cout << endl;

    cout << "Sorted cartesian pairs " << endl;
    for (int i = 0; i < r.size(); i++)
    {
        cout << " (" << r[i].first << " , " << r[i].second << ") ";
    }
    cout << endl;
}