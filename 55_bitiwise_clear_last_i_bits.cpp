#include <iostream>

using namespace std;

void clearLastiBits(int &num, int bit)
{
    int mask = (~0 << bit);
    num = num & mask;
}

int main()
{
    int num, bit;

    cout << "Enter the number " << endl;
    cin >> num;

    cout << "Entet the bit position from which to clear " << endl;
    cin >> bit;

    clearLastiBits(num, bit);
    cout << "The new number is " << num << endl;
}