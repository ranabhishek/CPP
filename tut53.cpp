//this pointer

#include<iostream>
using namespace std;

class A
{
    int a;
    public:
//    a & setData(int a)
    void setData(int a)
    {
        this->a=a;
    }
    void get_data(void)
    {
        cout<<"the value of a is :: "<<a<<endl;
    }
};
int main()
{
    //this is a keyword which is a pointer which points to the objects which invokes the member functions.
    A pc;
    pc.setData(4);
    pc.get_data();
    return 0;
}