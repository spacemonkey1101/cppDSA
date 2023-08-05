#include <iostream>
#include <queue>
using namespace std;

class Stack
{
    queue<int> q1, q2;

public:
    void push(int x)
    {
        if (!q1.empty())
        {
            q1.push(x);
        }
        else
        {
            q2.push(x);
        }
    }

    void pop()
    {
        if (q1.empty())
        {
            while (!q2.empty())
            {
                int res = q2.front();
                q2.pop();
                if (q2.empty())
                {
                    return;
                }
                q1.push(res);
            }
        }
        else
        {
            while (!q1.empty())
            {
                int res = q1.front();
                q1.pop();
                if (q1.empty())
                {
                    return;
                }
                q2.push(res);
            }
        }
    }

    int top()
    {
        if (q1.empty())
        {
            while (!q2.empty())
            {
                int res = q2.front();
                q2.pop();
                q1.push(res);
                if (q2.empty())
                {
                    return res;
                }
            }
        }
        else
        {
            while (!q1.empty())
            {
                int res = q1.front();
                q1.pop();
                q2.push(res);
                if (q1.empty())
                {
                    return res;
                }
            }
        }
        return -1;
    }

    bool empty()
    {
        return q1.size() == 0 && q2.size() == 0;
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.pop();
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    s.pop();

    while (!s.empty())
    {
        cout << s.top() << ",";
        s.pop();
    }
}