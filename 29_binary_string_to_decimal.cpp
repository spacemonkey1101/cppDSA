#include <iostream>
#include <string>
using namespace std;

int binaryToDecimal(string s)
{
    int power = 1;
    int sum = 0;

    for (char x : s)
    {
        power = power * 2;
    }
    power /= 2;

    for (char x : s)
    {
        if (x == '1')
        {
            sum += power;
        }
        power /= 2;
    }
    return sum;
}

int main()
{
    cout << binaryToDecimal("111") << endl;
    cout << binaryToDecimal("0001") << endl;
}