#include <iostream>
#include "46_vector.h"

using namespace std;
int main()
{
    // our vector will only take int unlike the STL vector
    // we need to make our container generic
    Vector<int> v(5);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.pop_back();

    cout << "element at front " << v.front() << endl;
    cout << "element at back " << v.back() << endl;
    cout << "element at second index " << v.elementAt(2) << endl;
    cout << v.size() << endl;
    cout << v.capacity() << endl;

    cout << "All the elements of the vector " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}