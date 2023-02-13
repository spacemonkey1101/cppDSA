#include <iostream>
#include <cstring>
using namespace std;

void permutation(char *input, int i, int e)
{
    if (i == e)
    {
        cout << input << endl;
        return;
    }
    for (int idx = i; idx <= e; idx++)
    {
        swap(input[i], input[idx]);
        permutation(input, i + 1, e);
        swap(input[i], input[idx]);
    }
}
int main(int argc, char const *argv[])
{
    char input[100];
    cin >> input;

    permutation(input, 0, strlen(input) - 1);
    return 0;
}
