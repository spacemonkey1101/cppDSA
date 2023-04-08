#include <iostream>
#include "99_list_printing.h"

using namespace std;

int main()
{
    List l;
    l.push_front(1);
    l.push_front(0);
    l.push_back(2);
    l.print_list();
    return 0;
}