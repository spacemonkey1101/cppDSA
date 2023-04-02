#include <iostream>

using namespace std;

class Product
{
    // data members
    int id;
    char name[100];
    int mrp;
    int sp;

    // member functions
public:
    // getters
    int getMRP()
    {
        return mrp;
    }
    int getSP()
    {
        return sp;
    }
    // setters
    void setMRP(int mrp)
    {
        // check negative
        if (mrp < 0)
        {
            this->mrp = 0;
            return;
        }
        this->mrp = mrp;
    }
    void setSP(int sp)
    {
        // check negative
        // additional logic
        if (sp > mrp || sp < 0)
        {
            this->sp = mrp;
        }
        else
        {
            this->sp = sp;
        }
    }
};

int main()
{
    Product camera;

    // cout << "MRP: " << camera.mrp << endl;
    // cout << "SP : " << camera.sp << endl;

    // camera.mrp = 100;
    // camera.sp = 200; // this is not practical - we need some checks
    // using setters
    camera.setMRP(100);
    camera.setSP(-90);

    cout << "MRP: " << camera.getMRP() << endl;
    cout << "SP: " << camera.getSP() << endl;

    return 0;
}