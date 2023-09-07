#include<iostream>
using namespace std;


class simple
{
int data1;
int data2;
int data3;
public:
simple(int a,int b=9,int c=3)
{
    data1=a;
    data2=b;
    data3=c;
}
void print()
{
cout<<"the value of data is "<<data1<<" and "<<data2<<" and "<<data3<<endl;
}
};

int main()
{
    simple a(1,2);
    a.print();
    return 0;
}