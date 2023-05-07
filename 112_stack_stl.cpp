#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<char> s;
    s.push('h');
    s.push('e');
    s.push('l');
    s.push('l');
    s.push('y');
    cout << s.top() << endl;
    s.pop();
    s.push('o');
    cout << s.top() << endl;
    while (!s.empty())
    {
        cout << s.top() << ",";
        s.pop();
    }
}