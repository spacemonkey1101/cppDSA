#include <iostream>
#include "110_stack_vectors.h"

using namespace std;

int main(){
    Stack<int> s;
    s.push(1);
    s.push(2);
    s.push(-1);
    s.pop();
    while (!s.empty())
    {
        cout<<s.top()<<", ";
        s.pop();
    }
    
}