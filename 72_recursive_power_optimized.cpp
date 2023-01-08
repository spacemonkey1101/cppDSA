#include <iostream>

using namespace std;

int power_optimized(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    if (exp & 1)
    {
        return base * power_optimized(base, exp / 2) * power_optimized(base, exp / 2);
    }
    return power_optimized(base, exp / 2) * power_optimized(base, exp / 2);
}
int main()
{
    int base, exp;
    cout << "Enter the base of a number" << endl;
    cin >> base;
    cout << "Enter the exp of a number" << endl;
    cin >> exp;

    cout << base << " raised to " << exp << " is " << power_optimized(base, exp);
}