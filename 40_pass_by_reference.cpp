#include <iostream>

using namespace std;

// void applyTax(int income) -> pass by value wont work
// pass by reference will work
void applyTax(int &income)
{
    float tax = 0.1;
    income -= income * tax;
}

int main()
{
    int income = 100;
    cout << "Income before tax " << income << endl;

    applyTax(income);
    cout << "Income after tax " << income << endl;
}