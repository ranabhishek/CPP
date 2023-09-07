//pointers to objects

#include<iostream>
using namespace std;

class complex
{
    int real,imaginary;
    public:
    void get_data()
    {
        cout<<"The real part is "<<real<<endl; 
        cout<<"The imaginary part is "<<imaginary<<endl; 
    }
    void set_data(int a,int b)
    {
        real=a;
        imaginary=b;
    }
};
int main()
{
    //complex c1;
    //complex *ptr=&c1;
    complex *ptr=new complex;
//    (*ptr).set_data(10,2); is exactly same as
    ptr->set_data(1,23);
    //(*ptr).get_data();is same as
    ptr->get_data();


    //array of objects
    complex *ptr1=new complex[4];

    ptr1->set_data(1,23);
    ptr1->get_data();
    return 0;
}