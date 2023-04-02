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
    // implement copy constructor
    // override the default constructor -- we copy garbage
    Product(Product &X) // parameter X has to be a reference
    {                   // variable so that we should not create a separate copy
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
    void showDetails()
    {
        cout << this->getMRP() << endl;
        cout << this->getSP() << endl;
        cout << this->getName() << endl;
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
    Product camera(101, 1000, 800, "new cam");
    cout << "Camera details" << endl;
    camera.showDetails();

    // calling the default copy constructor
    Product webcam(camera);
    cout << "Webcam details" << endl;
    webcam.showDetails();
    return 0;
}