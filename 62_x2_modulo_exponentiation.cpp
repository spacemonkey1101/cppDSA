/*Modulo Exponentiation

Given three numbers x, y and mod, compute x raised to power y modulo mod
i.e.  (x^y)%mod

Input Format
Three integers x, y and mod are passed.

Output Format
Return an integer

Sample Input
    x = 12, y = 25, mod = 10007
Sample Output
    9603*/

/*brute force is a^b using normal method then %m*/

#include <iostream>

using namespace std;

#define ll long long

ll fastModuloExponentiation(ll a, ll b, ll m)
{
    ll res = 1;
    while (b > 0)
    {
        if ((b & 1))
        {
            res = (res * a) % m;
        }
        a = (a * a) % m;
        b = b >> 1;
    }
    return res;
}

int main()
{
    ll base, exp, mod;
    cout << "Enter the base value " << endl;
    cin >> base;
    cout << "Enter the exponent value" << endl;
    cin >> exp;
    cout << "Enter the mod value " << endl;
    cin >> mod;

    cout << "The result is " << fastModuloExponentiation(base, exp, mod);
    return 0;
}