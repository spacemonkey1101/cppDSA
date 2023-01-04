#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> arr;
    // by default this vector has size 0
    cout << arr.size() << endl;

    vector<int> arr1 = {1, 2, 3, 4, 5, 6};
    cout << "size is " << arr1.size() << endl;
    cout << "capacity is " << arr1.capacity() << endl;

    arr1.push_back(7);
    // capacity will double itself
    cout << "size is " << arr1.size() << endl;
    cout << "capacity is " << arr1.capacity() << endl;

    arr1.pop_back();

    // print all elements of the vector
    for (int i = 0; i < arr1.size(); i++)
    {
        cout << arr1[i] << " ";
    }
    cout << endl;
    // initialize vector with fill constructor - 7 elements all 0
    vector<int> fill_vector(7, 0);
    for (int i = 0; i < fill_vector.size(); i++)
    {
        cout << fill_vector[i] << " ";
    }
}