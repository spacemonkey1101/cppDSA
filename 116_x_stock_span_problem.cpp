#include <iostream>
#include <vector>
#include <stack>
#include <utility>

using namespace std;

vector<int> stockSpannerBruteForce(vector<int> &stocks)
{
    int size = stocks.size();
    vector<int> res;
    int i, j;
    for (i = 0; i < size; i++)
    {
        for (j = i - 1; j >= 0; j--)
        {
            if (stocks[j] > stocks[i])
            {
                break;
            }
        }
        if (j == i - 1)
        {
            res.push_back(1);
        }
        else
        {
            res.push_back(i - j);
        }
    }
    return res;
}

vector<int> stockSpannerImproved(vector<int> &stocks)
{
    stack<pair<int, int>> s;
    int size = stocks.size();
    vector<int> res;
    int i, j;

    for (i = 0; i < size; i++)
    {
        int counter = 1;

        while (!s.empty())
        {
            pair<int, int> p, t = s.top();
            if (stocks[i] < t.first)
            {
                p.first = stocks[i];
                p.second = counter;
                s.push(p);
                res.push_back(p.second);
                break;
            }
            else
            {
                s.pop();
                counter = counter + t.second;
            }
        }

        if (s.empty())
        {
            pair<int, int> p(stocks[i], 1);
            s.push(p);
            res.push_back(p.second);
        }
    }
    return res;
}

int main()
{
    vector<int> stocks = {100, 80, 60, 70, 60, 75, 85};
    vector<int> resBrute = stockSpannerBruteForce(stocks);
    vector<int> resImproved = stockSpannerImproved(stocks);

    for (int i = 0; i < resBrute.size(); i++)
    {
        cout << resBrute[i] << ", ";
    }
    cout << endl;

    for (int i = 0; i < resImproved.size(); i++)
    {
        cout << resImproved[i] << ", ";
    }
}