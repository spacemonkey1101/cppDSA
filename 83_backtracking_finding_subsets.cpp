#include <iostream>
#include <vector>

using namespace std;

void printCharArray(char *arr)
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void subset(char *input, char *output, int i, int j)
{
    // base case
    if (input[i] == '\0')
    {
        if (output[0] == '\0')
        {
            cout << "null";
        }
        output[j] = '\0';
        printCharArray(output);
        return;
    }
    // recursive case
    // include ith char
    output[j] = input[i];
    subset(input, output, i + 1, j + 1);

    // include ith char
    output[j] = '\0';
    subset(input, output, i + 1, j);
}

int main()
{
    char input[100], output[100];
    cin >> input;

    subset(input, output, 0, 0);
}