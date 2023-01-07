#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    // this will give us -1 as the output
    cout << ~a << endl;

    // this will also give us -1 as the output
    cout << ~0 << endl;

    // left shift
    cout << (5 << 2) << endl;

    // right shift
    cout << (5 >> 2) << endl;
}