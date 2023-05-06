#include <iostream>
#include "108_stack_linked_list.h"

using namespace std;

int main()
{
    Stack<char> s;
    s.push('h');
    s.push('e');
    s.push('l');
    s.push('l');
    s.push('y');
    cout << s.top() << endl;
    s.pop();
    s.push('o');

    while (!s.empty())
    {
        cout << s.top() << ", ";
        s.pop();
    }
}