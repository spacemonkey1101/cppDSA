#include <iostream>
// iostream is for cin and cout

using namespace std;

int main()
{
    int marks[100], n; // reserving a array for 100 students

    cout << "Enter the number of marks for students" << endl;
    cin >> n;

    cout << "Enter the marks for " << n << " students" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> marks[i];
        // updating elements of an array
        marks[i] *= 2;
    }

    marks[n + 1] = 1001;

    cout << "The marks are " << endl;

    for (int i = 0; i <= n + 1; i++)
    {
        cout << marks[i] << ",";
    }
    cout << endl;
    cout << "we will see that the value at position " << n  << " is garbage" << endl;
}