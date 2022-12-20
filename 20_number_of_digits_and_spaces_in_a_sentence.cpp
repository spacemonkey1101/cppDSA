#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char sentence[1000];
    int len = 0, digit = 0, space = 0;

    // to get a character
    char temp = cin.get();

    while (temp != '\n')
    {
        if (temp >= '0' && (int)temp <= '9')
        {
            digit++;
        }
        if (temp == ' ')
        {
            space++;
        }
        sentence[len++] = temp;
        temp = cin.get();
    }
    sentence[len] = '\0';
    cout << "number of spaces are " << space << endl;
    cout << "number of digits are " << digit << endl;
    cout << "Length of the sentence is " << len << endl;
    cout << "sentence is " << sentence;
}