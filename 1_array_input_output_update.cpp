#include <iostream>
// iostream is for cin and cout

using namespace std;

int main()
{
    // int marks[100], n; // reserving a array for 100 students
    int marks[100] = {0}, n; // initializing with 0
    // will set all values as 0, removing the garbage

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

    for (int i = 0; i < 100; i++)
    {
        cout << marks[i] << ",";
    }
    cout << endl;
    cout << "we will see that the value are not filled with garbage but is initialized with the value" << endl;
}