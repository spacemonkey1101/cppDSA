#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char a[1000] = "apple";
    char b[1000];

    // calulating character array length - it does not take '\0' into account
    cout << "length of the cahracter array is " << strlen(a) << endl;
    cout << "finidng the null character " << (a[strlen(a) + 1] == '\0') << endl;

    // copying content of character array a to b
    strcpy(b, a);
    cout << "Content of character array a is " << a << endl;
    cout << "Content of character array b is " << b << endl;

    // string compare with character arrays
    cout << "Comparing two equal strings " << strcmp(a, b) << endl;

    char name[] = "Ritam";
    char sal[] = "Mr.";

    cout << "Concatinating 2 character arrays : " << strcat(sal, name) << endl;
}