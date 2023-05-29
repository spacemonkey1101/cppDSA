#include <iostream>

using namespace std;

class Stack
{
    int t = -1;
    int *arr;
    int size;

public:
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
    }

    void push(int data)
    {
        if (t == size - 1)
        {
            cout << "Stack is full; stack overflow" << endl;
            return;
        }
        arr[++t] = data;
    }

    void pop()
    {
        if (t < 0)
        {
            cout << "Stack is empty; stack underflow" << endl;
            return;
        }
        t--;
    }
    int top()
    {
        if (t < 0)
        {
            cout << "Stack is empty; stack underflow" << endl;
            return -1;
        }
        return arr[t];
    }
};

int main()
{
    Stack s(3);
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    while (s.top() != -1)
    {
        cout << s.top() << " , ";
        s.pop();
    }
}