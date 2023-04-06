/*
Copy Assignment Operator =
It is called when an already initialized object is assigned a new value
from another existing object

We use this after the object is contructed
Note : Constructor can be only called 1 time
*/
#include <iostream>
#include <cstring>
using namespace std;

class Product
{
    int id;
    char *name;
    int mrp;
    int sp;

public:
    Product()
    {
        cout << "Inside Constructor" << endl;
    }

    Product(int id, int mrp, int sp, char *name)
    {
        this->id = id;
        this->mrp = mrp;
        this->sp = sp;
        // allocating the memory dynamically
        this->name = new char[strlen(name) + 1];
        strcpy(this->name, name);
    }

    Product(Product &X)
    {
        id = X.id;
        mrp = X.mrp;
        sp = X.sp;
        name = new char[strlen(X.name) + 1];
        strcpy(name, X.name);
    }

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

    void setMRP(int mrp)
    {
        if (mrp < 0)
        {
            this->mrp = 0;
            return;
        }
        this->mrp = mrp;
    }
    void setSP(int sp)
    {

        if (sp > mrp || sp < 0)
        {
            this->sp = mrp;
        }
        else
        {
            this->sp = sp;
        }
    }
    void setName(char *name)
    {
        strcpy(this->name, name);
    }
};

int main()
{
    Product camera(101, 1000, 800, "new cam");

    // Product old_camera(camera);
    // Just construct the object but dont initialize
    Product old_camera;

    // Initialize using copy assignment operator
    old_camera = camera;
    // the below line changes both the camera and old_camera name to
    // "old cam" as copy assignment function does a shallow copy
    old_camera.setName("old cam");
    cout << "Camera details" << endl;
    camera.showDetails();

    cout << "Old Camera details" << endl;
    old_camera.showDetails();
    return 0;
}