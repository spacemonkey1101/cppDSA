#include <iostream>

using namespace std;
;

string spell[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
void spellNumber(int n)
{
    if (n == 0)
    {
        return;
    }
    int last_digit = n % 10;
    spellNumber(n / 10);
    cout << spell[last_digit] << " ";
}
int main()
{
    int n;
    cout << "Enter the number to spell out " << endl;
    cin >> n;
    spellNumber(n);
}