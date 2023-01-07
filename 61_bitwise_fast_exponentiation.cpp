#include <iostream>

using namespace std;

int main()
{
    int res = 1, base, exp;
    cout << "Enter the base value " << endl;
    cin >> base;
    cout << "Enter the exponent value" << endl;
    cin >> exp;

    // fast exponentiation
    while (exp > 0)
    {
        if ((exp & 1))
        {
            res *= base;
        }
        base = base * base;
        exp = exp >> 1;
    }
    cout << "the result is " << res << endl;
}