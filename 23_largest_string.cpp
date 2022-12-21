// read N Strings and print the largest string
#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char current[1000];
    char largest[1000];
    int N;

    cout << "Enter the number of strings, we had to read" << endl;
    cin >> N;

    // to eat up the '\n'
    cin.get();
    for (int i = 0; i < N; i++)
    {
        cin.getline(current, 1000);
        if (strlen(current) > strlen(largest))
        {
            strcpy(largest, current);
        }
    }
    cout << "Largest string is " << largest << endl;
}