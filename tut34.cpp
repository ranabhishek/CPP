#include <iostream>
using namespace std;

class CopyCONSTRUCTOR
{
    int a;
    public:
    CopyCONSTRUCTOR()
    {
        a=0;
    }

    CopyCONSTRUCTOR(int num)
    {
        a=num;
    }

    //WHEN NO CC IS FOUND COMPILER SUPPLY ITS OWN CC

    CopyCONSTRUCTOR(CopyCONSTRUCTOR &obj)
    {
        cout<<"COPY CONSTRUCTOR CALLED"<<endl;
        a=obj.a;
    }

    void display()
    {
        cout<<"the number of this object is "<< a <<endl;
    }


};

int main()
{
    CopyCONSTRUCTOR x,y,z(23),z2;
    z.display();
    x.display();
    y.display();
    CopyCONSTRUCTOR z1(z);    //CC INVOKED  //
    CopyCONSTRUCTOR z3=z;
    z3.display();
    z2=z;
    z1.display();   //CC NOT INVOKED

    //z1 == z  x1 == x 



    return 0;
}
