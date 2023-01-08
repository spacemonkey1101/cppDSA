#include <iostream>

using namespace std;

void increment_mine(int num, int end)
{
    if (num > end)
    {
        return;
    }
    cout << num << " ";
    increment_mine(num + 1, end);
}

void decrement(int num)
{
    // base case
    if (num == 0)
    {
        return;
    }
    // towards base case
    cout << num << " ";
    decrement(num - 1);
}
void increment(int num)
{
    // base case
    if (num == 0)
    {
        return;
    }
    // towards base case
    increment(num - 1);
    cout << num << " ";
}
int main()
{
    int n;
    cout << "Enter the number N till which you want to print" << endl;
    cin >> n;

    increment_mine(1, n);
    cout << endl;
    decrement(n);
    cout << endl;
    increment(n);
}