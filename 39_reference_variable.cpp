#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    int &y = x; // reference variable
    //int &z = 10; // this will not work

    cout << "Before incrementing " << endl;
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;

    x++;
    cout << " incrementing x" << endl;
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;

    y++;
    cout << " incrementing y" << endl;
    cout << "x is " << x << endl;
    cout << "y is " << y << endl;
}