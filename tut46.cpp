//CONSTRUCTORS IN DERIVED CLASS
/*
==> We can use constructors in derived classes inCPP.
==> If base class cons. does not have any arguments, there is no need of any constructor in derived class.
==> If there are one or more arguments in the base class constructor, derived class ned to pass argument to the base class cons.
==> If both base and derived class have same constructors, base class constructor is executed first.
==> In Multiple inheritance base classes are constructed in the order in which they appear in the class declaration.
==> In MultiLevel inheritance the constructors are executed in the order of inheritance.

Syntax :: 
====>> Derived_constructor(arg1,arg2,arg3....):Base1_constructor(arg1,arg2).Base2_constructor(arg3,arg4){....}Base1_constructor(arg1,arg2)

Special case of vbc
==> Invoked before an non virtual base class.
==> Follow order of declaration.
==> Any non-virtual base class are then constructed before the derived class constructor is executed. 
*/

#include<iostream>
using namespace std;

class BASE
{

};

class derived :  public BASE
{

};


int main()
{
    return 0;
}