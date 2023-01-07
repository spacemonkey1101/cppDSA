#include <iostream>

using namespace std;

int main()
{
    int num, count = 0;

    cout << "Enter the number to check" << endl;
    cin >> num;

    // for any number N it has atmost logN bits
    while (num > 0)
    {
        if ((num & 1) > 0)
        {
            count = count + 1;
        }
        num = num >> 1;
    }

    cout << "The number of set bits are " << count;
}