#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comparator(pair<string, int> s1, pair<string, int> s2)
{
    return s1.second > s2.second;
}

int main()
{
    // this is a vector which has a pair
    vector<pair<string, int>> students_marks = {
        {"Rohit", 15},
        {"Rohan", 20},
        {"Ashish", 8},
        {"Tanmay", 25}};

    sort(students_marks.begin(), students_marks.end());
    cout << "This will be lexographically sorted" << endl;
    for (auto student : students_marks)
    {
        cout << student.first << " ";
    }

    cout << endl;
    // for sorting based on marks, we use a comparator function
    sort(students_marks.begin(), students_marks.end(), comparator);
    cout << "This will be numerically sorted" << endl;
    for (auto student : students_marks)
    {
        cout << student.first << " ";
    }
}