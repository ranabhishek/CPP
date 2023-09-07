// FRIEND FUNCTION
// PROPERTIES OF FF
//1.  NOT IN THE SCOPE OF CLASS
//2   NOT CANNOT BE CALLED FROM THE OBJECT
//3.  CAN BE INVOKED WITHOUT HELP OF ANY OBJECTS
//4.  CONTAINS OBJECTS AS ARGUMENTS
//5.  CAN BE WRITTEN IN ANY SECTION PUBLIC OR PRIVATE
//6.  CANNOT ACCESS THE MEMBERS DIRECTLY BY THEIR NAME AND NEED OF THE OBJECT TO ACCESS ANY MEMBER

#include<iostream>
using namespace std;
class complex
{
int a,b;
public:
void setnember(int n1,int n2)
{
    a=n1;
    b=n2;
}


friend complex sumcomplex(complex o1, complex o2);
//sumcomplex MEANS THAT NON MEMBER FUNCTION IS ALLOWEDTO DO ANUTHING

void printnumber()
{
    cout<<"your number is  "<<a<<"+"<<b<<"i"<<endl;
}
};


complex sumcomplex(complex o1,complex o2)
{
    complex o3;
    o3.setnember((o1.a + o2.a),(o1.b + o2.b));
    return o3;
}


int main()
{
    complex c1,c2,sum;
  
    c1.setnember(1,4);
    c1.printnumber();

    c2.setnember(5,8);
    c2.printnumber();

    sum=sumcomplex(c1,c2);
    sum.printnumber();

    return 0;
}