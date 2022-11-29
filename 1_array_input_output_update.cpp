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
    

    cout << "The marks are " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << marks[i] << ",";
    }
}