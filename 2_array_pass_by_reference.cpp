#include <iostream>

using namespace std;

void printArray(int arr[])
{
    // pointer variable has a size of 4 bytes
    // cout << "In printArray function " << sizeof(arr) << endl;

    int size = sizeof(arr) / sizeof(int);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ,";
    }
    
    //the above code prints
    //1 ,
}

int main()
{
    int arr[] = {1, 2, 3, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);

    // here the pointer is aware that its pointing to an array
    // hence it is aware of its size = 24bytes (6*4)
    // cout << "In main function " << sizeof(arr) << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ,";
    }
    //the above code prints
    //1 ,2 ,3 ,3 ,4 ,5 ,
    cout << endl;

    //only an address is passed 
    printArray(arr);
}