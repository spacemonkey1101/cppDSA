/*
Input :
1<- top
2
3


Output:
3 <- top
2
1
*/

#include <iostream>
#include <stack>

using namespace std;

void printStack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << endl;
}
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

void reverseRecursiveStack(stack<int> &s)
{
    //base case
    if(s.empty()){
        return;
    }
    //recursive case
    int t = s.top();
    s.pop();
    reverseRecursiveStack(s);
    //use the insert at bottom function that we implemented previously
    insertAtBottom(s,t);
}

int main()
{
    stack<int> s;
    for (int i = 3; i >= 1; i--)
    {
        s.push(i);
    }
    printStack(s);

    reverseRecursiveStack(s);
    printStack(s);

    return 0;
}