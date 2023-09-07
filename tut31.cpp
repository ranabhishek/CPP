#include<iostream>
using namespace std;

class complex
{
    int a;
    int b;
public:
complex(int x,int y)
{
    a=x;
    b=y;
}
// MULTIPLE CONSTRUCTOR
// CONSTRUCTOR OVERLOADING
complex(int x)
{
    a=x;
    b=0;
}
complex()
{
    a=0;
    b=0;
}
void print()
{
    cout<< "the number is "<<a<<" + "<<b<<" i "<<endl;
}
};

int main()
{
    complex a(1,2);
    a.print();
    complex b(2);
    b.print();
    complex c;
    c.print();

    return 0;
}