#include <iostream>

using namespace std;

int main()
{
    int num, count = 0;
    cin >> num;
    while (num > 0)
    {
        // removes the last set bit from the current number
        num = num & (num - 1);
        count++;
    }
    cout << "The number of set bits is " << count;
}