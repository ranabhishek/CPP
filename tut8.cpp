#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  // CONSTANT
  // int a=34;
  // cout<<"the value of a is "<<a;
  // a=45;
  // cout<<"the value of a is "<<a;
  // const int a=45;
  // cout<<"the value of a is "<<a;
  /*  int a=1,b=222,c=3333; */
  /*  cout<<"value of a is "<<setw(4)<<a<<endl;
   cout<<"value of b is "<<setw(4)<<b<<endl;
   cout<<"value of c is "<<setw(4)<<c<<endl;


     cout<<"value of a without setw is "<<a<<endl;
   cout<<"value of b without setw  is "<<b<<endl;
   cout<<"value of c without setw is "<<c<<endl; */

  // OPERATOR PRECEDENCE
  int a = 3, b = 4;
  //  int c=a*5+b;
  int c = ((((a * 5) + b) - 45) + 87);
  cout << c;
  return 0;
}
