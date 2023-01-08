#include <iostream>

using namespace std;

int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    return num * factorial(num - 1);
}

int main()
{
    int num;
    cout << "Enter the number whose factorial is to be calculated" << endl;
    cin >> num;

    cout << "the factorial of " << num << " is " << factorial(num) << endl;
}