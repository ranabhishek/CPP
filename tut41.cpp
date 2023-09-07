//Multiple Inheritance

#include<iostream>
using namespace std;

class base1
{
    protected:
    int base1Int;
    public:
    void set_base1Int(int a){
        base1Int=a;
    }
};

class base2
{
    protected:
    int base2Int;
    public:
    void set_base2Int(int a){
        base2Int=a;
    }
};

/* class derived : visibility-mode base1,visibility-mode base2
{}; */

class derived : public base1,public base2
{
    public:
    void show()
    {
        cout<<"the value of base1 is :: "<<base1Int<<endl;
        cout<<"the value of base2 is :: "<<base2Int<<endl;
        cout<<"the sum of these values are :: "<<base1Int+base2Int<<endl;
    }
};

/*
the inherited derived class will look something like this
data members
       base1Int---> protected
       base2Int---> protected

Member functions
       set_base1Int()---> public
       set_base2Int---> public 
       set_show()---> public
*/
int main()
{
    derived harry;
    harry.set_base1Int(2);
    harry.set_base2Int(5);
    harry.show();
}