#include <iostream>

using namespace std;

void clearithBit(int &num, int bit)
{
    int mask = ~(1 << bit);
    num = num & mask;
}

void updateithBit(int &num, int bit, int val)
{
    // clear that particular bit
    clearithBit(num, bit);
    // set it with the new value
    int mask = val << bit;
    num = num | mask;
}

int main()
{
    int num, bit, val;

    cout << "Enter the number " << endl;
    cin >> num;

    cout << "Entet the bit you want to update " << endl;
    cin >> bit;

    cout << "Entet the value you want to set " << endl;
    cin >> val;
    updateithBit(num, bit, val);
    cout << "The new number is " << num << endl;
}