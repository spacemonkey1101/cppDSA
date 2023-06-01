#include<iostream>
#include<vector>

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
        if (j== i-1)
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
int main()
{
    vector<int> stocks = {100, 80, 60, 70, 60, 75, 85};
    vector<int> resBrute = stockSpanner(stocks);

    for (int i = 0; i < resBrute.size(); i++)
    {
        cout << resBrute[i] << ", ";
    }
    cout<<endl;
}