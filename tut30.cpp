// parameterised CONSTRUCTORS 
// takes some parameters
// 
#include<iostream>
using namespace std;
class complex
{
    int a,b;
public:
complex(int , int );
void printnumber()
{
    cout<<"the number is  "<<a <<" + " <<b<<"i"<<endl;
}
};

complex  :: complex(int x, int y)  //PARAMETERISED CONSTRUCTOR
{
    a=x;
    b=y;
}

int main()
{
    //IMPLICIT CALL
  //  complex a(4,6);
  //EXPLICIT CALL
  complex b=complex(5,7);
    b.printnumber();
    return 0;
}