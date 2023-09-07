//POINTERS TO DERIVED CLASS ==> base class pointer can point to the base class object.


#include<iostream>
using namespace std;

class BaaseClass
{
    public:
    int var_base;
    void display()
    {
        cout<<"Displaying Base class variable var_base :: "<<var_base<<endl;
    }
};

class DerivedClass:public BaaseClass
{
    public:
    int var_derived;
    void display()
    {
        cout<<"Displaying Base class variable var_base :: "<<var_base<<endl;
        cout<<"Displaying Base class variable var_derived :: "<<var_derived<<endl;
    }
};

int main()
{
    BaaseClass *base_class_pointer;
    BaaseClass obj_base;
    DerivedClass obj_Derived;
    base_class_pointer=&obj_Derived;//pointing to base class only access variables of base class
    base_class_pointer->var_base=34;
   // base_class_pointer->var_derived=123;//will throw error
    base_class_pointer->display();

    DerivedClass *derived_class_pointer;
    derived_class_pointer=&obj_Derived;
    derived_class_pointer->var_derived=23;
    derived_class_pointer->var_base=90;
    derived_class_pointer->display();
    return 0;
}
