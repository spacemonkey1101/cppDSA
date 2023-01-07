#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter the number to check " << endl;
    cin >> num;

    if (num & 1 == 1)
    {
        cout << num << " is odd" << endl;
    }
    else
    {
        cout << num << " is even" << endl;
    }
}