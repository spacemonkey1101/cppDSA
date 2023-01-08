#include <iostream>

using namespace std;

int power(int base, int exp)
{
    if (exp == 0)
    {
        return 1;
    }
    return base * power(base, exp - 1);
}
int main()
{
    int base, exp;
    cout << "Enter the base of a number" << endl;
    cin >> base;
    cout << "Enter the exp of a number" << endl;
    cin >> exp;

    cout << base << " raised to " << exp << " is " << power(base, exp);
}