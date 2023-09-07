//INITIALIZATION LIST IN CONSTRUCTORS
/*
SYNTAX :: 
constructor(argument_list) : initialisation-section
{
    assignment +other code
}

clsas test{
    int a;
    int b;
    public:
    test(int i,int j) : a(i),b(j)
};
*/


#include<iostream>
using namespace std;

class test{
    int a;
    int b;
    public:
 // test(int i,int j) : a(i),b(i+j)
 // test(int i,int j) : a(i),b(i+j)
 // test(int i,int j) : a(i),b(a+j)// test(int i,int j) : b(i+j),a(i+b)//error a initialised first a was declared first
    test(int i,int j) : a(i)
    {
        b=j;
        cout<<"executed"<<endl;
        cout<<"value of a "<<a<<endl;
        cout<<"value of a "<<a<<endl;
    }
};

int main()
{
    test t(4,6);
    return 0;
}