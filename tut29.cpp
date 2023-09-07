#include<iostream>
using namespace std;

//   CONSTRUCTORS
//   special member function with same name as class name use to initialise objects of classes automatically invoked whenever an object is created
//   properties :: 
//   declare in public section of class they are automatically invoke whenever object is created
//   do not have any return type
//   can have default arguments
//   we can't refer to their address

class complex
{
    int a,b;

    public:
    complex(void);

void printdata()
{
    cout<<"your number is "<<a<< " + "<<b<<"i "<<endl;
}
};

complex :: complex(void) // DEFAULT CONSTRUCTOR : takes no parameters
{
  a=0;
  b=0;
  //  cout<<"HELLO WORLD";
}
 int main()
 {
     complex c;
     c.printdata();
     return 0;
 }