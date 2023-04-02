#include <iostream>

using namespace std;

class Product
{
    // data members
    int id;
    char name[100];

public:
    int mrp;
    int sp;
};

int main()
{
    Product camera;
    // camera is an object and it occupies memory

    cout << "Size of camera : " << sizeof(camera) << endl;
    // 112 = 100*1 + 4 + 4 + 4

    // get the mrp of the camera if mrp is public
    // we get garbage as these are not initialized
    cout << "MRP: " << camera.mrp << endl;
    cout << "SP : " << camera.sp << endl;

    // set the value of data members
    // this is not recommended in this way
    // anyone can change this data
    camera.mrp = 100;
    camera.sp = 200; // this is not practical - we need some checks

    // we use getters instead of directly accessing the data memebers
    cout << "MRP: " << camera.mrp << endl;
    cout << "SP: " << camera.sp << endl;

    return 0;
}