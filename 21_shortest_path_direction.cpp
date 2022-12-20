#include <iostream>
using namespace std;

int main()
{
    char arr[1000];
    cin.getline(arr, 1000);

    int vertical = 0, horizontal = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == 'S')
        {
            vertical--;
        }
        else if (arr[i] == 'N')
        {
            vertical++;
        }
        else if (arr[i] == 'E')
        {
            horizontal++;
        }
        else
        {
            horizontal--;
        }
    }

    if (vertical >= 0 and horizontal >= 0)
    {
        for (int i = 0; i < vertical; i++)
        {
            cout << 'N';
        }
        for (int i = 0; i < horizontal; i++)
        {
            cout << 'E';
        }
    }

    else if (vertical >= 0 and horizontal <= 0)
    {
        for (int i = 0; i < vertical; i++)
        {
            cout << 'N';
        }
        for (int i = horizontal; i > 0; i--)
        {
            cout << 'W';
        }
    }
    else if (vertical <= 0 and horizontal >= 0)
    {
        for (int i = vertical; i > 0; i--)
        {
            cout << 'S';
        }
        for (int i = 0; i < horizontal; i++)
        {
            cout << 'E';
        }
    }
    else
    {
        for (int i = vertical; i > 0; i--)
        {
            cout << 'S';
        }
        for (int i = horizontal; i > 0; i--)
        {
            cout << 'W';
        }
    }
}