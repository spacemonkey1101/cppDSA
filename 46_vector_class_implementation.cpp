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
    Vector(int max_capacity=1)
    {
        current_size = 0;
        max_capacity = max_capacity;
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

    int elementAt(int i){
        return arr[i]; 
    }

    int size(){
        return current_size;
    }

    int capacity(){
        return max_capacity;
    }
};
int main()
{
    Vector v;
}