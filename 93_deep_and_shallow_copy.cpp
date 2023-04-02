/* if the default constructor works properly why create
 our own constructor -- for deep and shallow copy
 The compiler created copy constructor works fine for most cases
 We need to define our own copy constructor if an object has pointers to
 dynamically allocated objects i.e, a deep copy of objects are needed.

 We will make name a pointer to a dynamic array
*/
#include <iostream>
#include <cstring>
using namespace std;

class Product
{
    int id;
    // pointer to a dynamic array in heap memory
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
    // This is how shallow copy happens 
    // Blindly copying values
    Product(Product &X)
    {
        id = X.id;
        mrp = X.mrp;
        sp = X.sp;
        name = X.name;
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
    void setName(char *name)
    {
        strcpy(this->name, name);
    }
};

int main()
{
    Product camera(101, 1000, 800, "new cam");
    // We need out own constructor to do a DEEP COPY
    Product old_camera(camera);

    old_camera.setName("old cam");

    // the below code does not change properties of both
    // copying of sp happened throup value not reference
    old_camera.setSP(700);
    cout << "Camera details" << endl;
    camera.showDetails();

    cout << "Old Camera details" << endl;
    old_camera.showDetails();
    return 0;
}