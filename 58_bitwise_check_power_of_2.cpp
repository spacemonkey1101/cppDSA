#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter the number to check " << endl;
    cin >> num;
    if ((num & (num - 1)) == 0)
    {
        cout << num << " is a power of 2" << endl;
    }
    else
    {
        cout << num << " is NOT a power of 2" << endl;
    }
}