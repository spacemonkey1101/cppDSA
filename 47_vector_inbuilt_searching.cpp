#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> arr = {10, 11, 2, 3, 5, 4};
    int key = 50;

    // inbuilt search on container data structures are find()
    // we can use it on arrays, vectors
    // the find function returns an iterator
    // iterator is like a pointer

    // in our search arr.begin() is included
    // arr.end() is not included

    // find internally uses linear search
    vector<int>::iterator it = find(arr.begin(), arr.end(), key);

    // the it iterator will give us the address of the key
    if (it != arr.end())
    {
        cout << it - arr.begin() << " is the index" << endl;
    }
    else
    {
        cout << key << " is not found " << endl;
    }
}