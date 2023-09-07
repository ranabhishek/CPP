#include<iostream>
using namespace std;
class complex;

    class calculator
{
    public:

    int add(int a, int b)
    {
    return a+b;
    }
    
    int sumcomplex(complex,complex);
    int comcomplex(complex,complex);
};
class complex
{
int a,b;
/* friend int calculator:: sumcomplex(complex ,complex );
friend int calculator:: comcomplex(complex ,complex ); */

friend class calculator;
public:
void setnember(int n1,int n2)
{
    a=n1;
    b=n2;
}

void printnumber()
{
    cout<<"your number is  "<<a<<"+"<<b<<"i"<<endl;
}
};


//  INDIVIDUAL DECLARATION
  int calculator :: sumcomplex(complex o1,complex o2)
    {
    return (o1.a+o2.a);
    }
 int calculator :: comcomplex(complex o1,complex o2)
    {
    return (o1.b+o2.b);
    } 
//  ALTER DECLARE ENTIRE CLASS AS FRIEND 

int main()
{
    complex o1,o2;
    o1.setnember(1,4);
    o2.setnember(5,7);
    calculator calc;
    int res =calc.sumcomplex(o1,o2);
    cout<<"the sum is  "<<res<<endl;
    int pes=calc.comcomplex(o1,o2);
     cout<<"the sum is  "<<pes<<endl;
    return 0;
}