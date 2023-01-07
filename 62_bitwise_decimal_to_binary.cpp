#include <iostream>

using namespace std;

int main()
{
    int decimal, pow = 1, binary = 0;
    cout << "Enter the decimal number " << endl;
    cin >> decimal;

    while (decimal > 0)
    {
        int last_bit = decimal & 1;
        binary += pow * last_bit;
        pow = pow * 10;
        decimal = decimal >> 1;
    }
    cout << "binary is " << binary << endl;
}