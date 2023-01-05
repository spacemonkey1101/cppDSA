#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int calulateTotalMarks(vector<int> m)
{
    return m[0] + m[1] + m[2];
}

bool comparator(pair<string, vector<int>> s1, pair<string, vector<int>> s2)
{
    vector<int> m1 = s1.second;
    vector<int> m2 = s2.second;
    return calulateTotalMarks(m1) > calulateTotalMarks(m2);
}

int main()
{
    // this is a vector which has a pair of names and marks
    vector<pair<string, vector<int>>> students_marks = {
        {"Rohit", {15, 20, 30}},
        {"Rohan", {20, 30, 10}},
        {"Ashish", {8, 8, 8}},
        {"Tanmay", {25, 10, 15}}};

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