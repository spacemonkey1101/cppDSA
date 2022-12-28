#include <iostream>

using namespace std;

int main()
{
    int x;
    cout << "Value of x is " << endl;
    cout << x << endl;

    cout << "address of normal variable x" << endl;
    cout << &x << endl;

    cout << "address of normal variable x stored in a pointer variable" << endl;
    int *ptr = &x;
    cout << ptr << endl;

    cout << "value of x in ptr is " << endl;
    cout << *ptr << endl;

    cout << "address of ptr is " << endl;
    cout << &ptr << endl;

    cout << "address of ptr stored in xptr is " << endl;
    int **xptr = &ptr;
    cout << xptr << endl;

    cout << "Value stored in xptr is *xptr (using dereference operator)" << endl;
    cout << *xptr << endl;

    cout << "double dereferencing xptr is **xptr" << endl;
    cout << **xptr << endl;

    // NULL pointer
    int *p = 0;
    int *q = NULL;

    // segmentation fault
    // cout << "dereferencing p " << *p << endl;
    // cout << "dereferencing q " << *q << endl;
}