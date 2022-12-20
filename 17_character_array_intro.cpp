#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // this is the wrong way of initializing array
    char A[] = {'a', 'b', 'c', 'd'};
    // this will give a
    cout << A;
    cout << endl;

    // one of the ways to initialize char arrays
    char B[] = {'f', 'u', 'b', 'a', 'r', '\0'};
    cout << B;
    cout << endl;

    char C[] = "foo bar";
    // the null character is added at the end.
    cout << C;
    cout << endl;

    cout << strlen(C) << endl;
    cout << sizeof(C) << endl;
    // this takes in the size of the null character.

    // take input to a character array
    cin >> B;
    // cin would not work if there are spaces in the input
    cout << B;
    cout << endl;
}