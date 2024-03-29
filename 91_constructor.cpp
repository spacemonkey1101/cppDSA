#include <iostream>
#include <cstring>
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
    // constructor -- by default this constructor exists
    // this method is called automatically
    // by defining we are overriding this method
    Product()
    {
        // called when the object is initialized
        cout << "Inside Constructor" << endl;
    }
    // Parameterized Constructor
    // constructor overloading
    Product(int id, int mrp, int sp, char *name)
    {
        this->id = id;
        this->mrp = mrp;
        this->sp = sp;
        strcpy(this->name, name);
    }
    // getters
    int getMRP()
    {
        return mrp;
    }
    int getSP()
    {
        return sp;
    }
    char *getName()
    {
        return name;
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
    Product camera;                             // default constructor is called
    Product camera2(101, 1000, 800, "new cam"); // parameterized constructor is called

    camera.setMRP(100);
    camera.setSP(90);

    cout << "MRP: " << camera.getMRP() << endl;
    cout << "SP: " << camera.getSP() << endl;

    cout << "New Cam MRP: " << camera2.getMRP() << endl;
    cout << "New Cam SP: " << camera2.getSP() << endl;
    cout << "New Cam Name: " << camera2.getName() << endl;
    return 0;
}