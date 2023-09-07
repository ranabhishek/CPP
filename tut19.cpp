#include<iostream>
using namespace std;
int add(int a,int b)
{
    cout<<"using function with 2 arguments"<<endl;
    return a+b;
}
int add(int a,int b,int c)
{
    cout<<"using function with 3 arguments"<<endl;
    return a+b+c;
    
}
int volume(double r,int h)
{
    return (3.14/3)*r*r*h;
}
int volume(double a)
{
    return a*a*a;
}
int volume(int l,int b,int h)
{
    return l*b*h;
}
int main()
{
    cout<<"sum of 3 and 5 is    "<<add(3,5)<<endl;
    cout<<"sum of 3 ,4 and 5 is "<<add(3,4,5)<<endl;
    cout<<"volume of cuboid is "<<volume(3,4,5)<<endl;
    cout<<"volume of cylinder is "<<volume(3,4)<<endl;
    cout<<"volume of cube is "<<volume(3)<<endl;
    return 0;
}
