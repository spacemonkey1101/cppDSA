#include <iostream>
#include <vector>

using namespace std;

void printArray(vector<int> &v, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void fillArray(vector<int> &v, int i, int n)
{
    // base case
    if (i == n)
    {
        printArray(v, n);
        return;
    }
    v[i] = i + 1;
    // recursive case
    fillArray(v, i + 1, n);
    // backtracking step
    v[i] = v[i] * -1;
}

int main()
{
    // initializing all elements to 0
    vector<int> v(100,0);
    int n;
    cout << "Enter the value of n " << endl;
    cin >> n;

    fillArray(v, 0, n);
    printArray(v, n);

    return 0;
}