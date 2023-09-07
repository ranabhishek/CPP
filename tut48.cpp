#include<iostream>
using namespace std;
/*
case 1:
class b:public a{
    order of execution -> first a() then b()
};
case 2:
class a: public b,public c{
    order -> b() c() a()
};
case 3:
class a: public b,virtual public c{
    order -> c() b() a()
};
*/

class BASE
{
    int data;
    public:
    BASE(int i)
    {
        data=i;
        cout<<"base class constructor called "<<endl;
    }
    void print_database(void)
    {
        cout<<"the value of data is "<<data<<endl;
    }
};

class BASE2
{
    int data;
    public:
    BASE2(int i)
    {
        data=i;
        cout<<"base2 class constructor called "<<endl;
    }
    void print_database2(void)
    {
        cout<<"the value of data is "<<data<<endl;
    }
};

class derived :  public BASE,public BASE2
{
    int derived1,derived2;
    public:
    derived(int a,int b,int c,int d):BASE(a),BASE2(b)
    {
        derived1=c;
        derived2=d;
        cout<<"Derived class constructor called "<<endl;
    }
    void print_data(void)
    {
        cout<<"the value of derived1 and derived2 is "<<derived1<<derived2<<endl;
    }
};


int main()
{
    derived harry(1,2,3,4);
    harry.print_database();
    harry.print_database2();
    harry.print_data();
    return 0;
}