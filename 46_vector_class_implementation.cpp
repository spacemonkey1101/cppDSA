#include <iostream>

using namespace std;
class Vector
{
    // data members
    int *arr;
    int current_size;
    int max_capacity;

    // member function
public:
    // constructor
    Vector(int max_capacity = 1)
    {
        current_size = 0;
        this->max_capacity = max_capacity;
        arr = new int[max_capacity];
    }

    void push_back(int element)
    {
        if (current_size == max_capacity)
        {
            // create the new array with the double size
            int *old_arr = arr;
            max_capacity *= 2;
            arr = new int[max_capacity];
            // copy the elements
            for (int i = 0; i < current_size; i++)
            {
                arr[i] = old_arr[i];
            }
            // delete the old array
            delete[] old_arr;
        }
        arr[current_size++] = element;
    }

    void pop_back()
    {
        if (current_size > 0)
        {
            current_size--;
        }
    }

    bool isEmpty()
    {
        if (current_size == 0)
        {
            return true;
        }
        return false;
    }

    int front()
    {
        if (!isEmpty())
        {
            return arr[0];
        }
        return -100000;
    }

    int back()
    {
        return arr[current_size - 1];
    }

    int elementAt(int i)
    {
        return arr[i];
    }

    int size()
    {
        return current_size;
    }

    int capacity()
    {
        return max_capacity;
    }
};
int main()
{
    Vector v(5);
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

    cout<<"All the elements of the vector "<<endl;
    for(int i = 0 ; i < v.size(); i++){
        cout<<v.elementAt(i)<<" ";
    }
}