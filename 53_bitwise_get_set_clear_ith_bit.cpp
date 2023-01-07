#include <iostream>

using namespace std;
int getithBit(int num, int bit)
{
    int mask = 1 << bit;
    if ((num & mask) > 0)
    {
        return 1;
    }
    return 0;
}

void setithBit(int &num, int bit)
{
    int mask = 1 << bit;
    num = num | mask;
}
int main()
{
    int n, gbit, sbit;

    cout << "Enter the number " << endl;
    cin >> n;

    cout << "Entet the bit you want to get " << endl;
    cin >> gbit;

    cout << "The " << gbit << "th bit is " << getithBit(n, gbit) << endl;

    cout << "Enter the bit you want to set" << endl;
    cin >> sbit;
    setithBit(n, sbit);
    cout << "The new number is " << n << endl;
}