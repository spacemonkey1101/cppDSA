/*
Destructor is a Function that is automatically called when an object is destroyed
i.e. an object goes out of scope or destroyed explicitly by a call to delete

Compiler provides a default constructor
User defined destructor is needed when class contains pointers to dynamically allocated memory
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

    void operator=(Product &X)
    {
        id = X.id;
        name = new char[strlen(X.name) + 1];
        strcpy(name, X.name);
        sp = X.sp;
        mrp = X.mrp;
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

    // overriding default destructor
    ~Product()
    {
        cout << "Deleting " << name << endl;
        // we should delete dynamically allocated memory
        // only name is dynamically allocated
        if (name != NULL)
        {
            delete[] name;
            name = NULL;
        }
    }
};

int main()
{
    Product camera(101, 1000, 800, "new cam");

    cout << "Camera details" << endl;
    camera.showDetails();
    return 0;
} // destructor is called here.
