#include <iostream>

using namespace std;
void clearBitsInRange(int &num, int sbit, int ebit)
{
    int mask1 = (~0 << (ebit + 1));
    int mask2 = (1 << sbit) - 1;
    int mask = mask1 | mask2;
    num = num & mask;
}

int main()
{
    int num, sbit, ebit;

    cout << "Enter the number " << endl;
    cin >> num;

    cout << "Enter the start bit position to clear " << endl;
    cin >> sbit;

    cout << "Enter the end bit position to clear " << endl;
    cin >> ebit;

    clearBitsInRange(num, sbit, ebit);
    cout << "The new number is " << num << endl;
}