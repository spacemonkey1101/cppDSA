#include <iostream>
#include "121_queue.h"

using namespace std;

int main()
{
    Queue<int> q(5);
    q.push(5);
    q.push(6);
    q.push(7);
    q.pop();
    q.push(8);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}