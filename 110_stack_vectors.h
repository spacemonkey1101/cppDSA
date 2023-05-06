#include <vector>

using namespace std;

template <typename T>
class Stack
{
    // private data member
    vector<T> v;

public:
    void push(T d)
    {
        v.push_back(d);
    }

    void pop()
    {
        v.pop_back();
    }

    T top()
    {
        if (!empty())
        {
            int last_ind = v.size() - 1;
            return v[last_ind];
        }
    }

    bool empty()
    {
        return v.size() == 0;
    }
};