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
int main()
{
    int n, gbit;

    cout << "Enter the number " << endl;
    cin >> n;

    cout << "Entet the bit you want to get " << endl;
    cin >> gbit;

    cout << "The " << gbit << "th bit is " << getithBit(n, gbit) << endl;
}