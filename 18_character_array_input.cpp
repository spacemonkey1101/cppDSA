#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char sentence[1000];
    // to get a character
    char temp = cin.get();

    int len = 0;
    while (temp != '\n')
    {
        sentence[len++] = temp;
        temp = cin.get();
    }
    sentence[len] = '\0';
    cout << len + 1 << endl;
    cout << sentence << endl;
}