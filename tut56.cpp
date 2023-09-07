//VIRTUAL FUNCTIONS

#include<iostream>
using namespace std;

class BaaseClass
{
    public:
    int var_base=1;
    virtual void display()
    {
        cout<<"1. Displaying Base class variable var_base :: "<<var_base<<endl;
    }
};

class DerivedClass:public BaaseClass
{
    public:
    int var_derived=2;
    void display()
    {
        cout<<"2. Displaying Base class variable var_base :: "<<var_base<<endl;
        cout<<"2. Displaying Base class variable var_derived :: "<<var_derived<<endl;
    }
};

int main()
{
    BaaseClass *base_class_pointer;
    BaaseClass obj_base;
    DerivedClass obj_Derived;

    base_class_pointer=&obj_Derived;
    base_class_pointer->display();
    return 0;
}