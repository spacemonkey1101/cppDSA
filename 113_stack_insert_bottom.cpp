#include <iostream>
#include <stack>

using namespace std;

void insertAtBottom(stack<int> &s, int data)
{
    // base case
    if (s.empty())
    {
        s.push(data);
        return;
    }
    int temp = s.top();
    s.pop();
    insertAtBottom(s, data);
    s.push(temp);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    while (!s.empty())
    {
        cout << s.top() << ", ";
        s.pop();
    }
    cout << endl;
    s.push(1);
    s.push(2);
    insertAtBottom(s, 0);

    while (!s.empty())
    {
        cout << s.top() << ", ";
        s.pop();
    }
}