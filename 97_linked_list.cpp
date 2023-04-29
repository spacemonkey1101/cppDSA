#include <iostream>
#include "107_delete_position_linked_list.h"

using namespace std;

int main()
{
    List l;
    l.push_front(1);
    l.push_front(0);
    l.push_back(3);
    l.print_list();
    // 0 1 3
    l.insert(2, 2);
    l.print_list();
    // 0 1 2 3
    l.insert(10, 0);
    l.print_list();
    // 10 0 1 2 3

    cout << l.search(10) << endl;  // 0
    cout << l.search(2) << endl;   // 3
    cout << l.search(101) << endl; //-1

    cout << l.recursiveSearch(101) << endl; //-1
    cout << l.recursiveSearch(2) << endl;   // 3
    cout << l.recursiveSearch(10) << endl;  // 0

    l.pop_front();
    l.print_list();
    // 0 1 2 3

    l.pop_front();
    l.print_list();
    // 1 2 3

    l.pop_back();
    l.print_list();
    // 1 2

    l.pop_back();
    l.print_list();
    // 1

    l.pop_back();
    l.print_list();
    // empty

    l.pop_back();
    l.pop_front();

    l.push_front(1);
    l.push_front(0);
    l.push_back(3);
    l.print_list();
    // 0 1 3

    l.delete_position(1);
    l.print_list();
    // 0 3
    l.delete_position(0);
    l.print_list();
    // 3

    return 0;
}