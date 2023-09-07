#include <iostream>
using namespace std;
int c = 45;
int main()
{
  //**************BUILT IN DATA TYPE*********
  //  int a,b,c;
  // cout<<"enter the value of a"<<endl;
  // cin>>a;
  // cout<<"enter the value of b"<<endl;
  // cin>>b;
  // c=a+b;
  // cout<<"sum of a and b is "<<c<<endl;
  // cout<<"GLOBAL OF C IS "<<::c;//scope resolution operator
  //**************FLOAT DOUBLE LONG DOUBLE LITERALS*********
  // float d=34.4F;
  // long double e=34.4l;

  //    cout<<"the size of 34.4 is "<<sizeof(34.4)<<endl;
  //  cout<<"the size of 34.4f is "<<sizeof(34.4f)<<endl;
  //  cout<<"the size of 34.4F is "<<sizeof(34.4F)<<endl;
  //  cout<<"the size of 34.4l is "<<sizeof(34.4l)<<endl;
  //  cout<<"the size of 34.4L is "<<sizeof(34.4L)<<endl;
  //    cout<<"the value of d is "<<d<<endl<<"the value of e is "<<e;
  //**************REFERENCE VARIABLE*********
  /*    float x=455;
     float & y=x;
     cout<<x<<endl<<y; */
  //**************TYPEcasting*********
  int a = 45;
  float b = 45.4;
  int c = (int)b;
  cout << "value of a " << (float)a << endl;
  cout << "value of b " << (int)b << endl;
  cout << "value of c" << c << endl;
  cout << "exp is " << a + b << endl;
  cout << "exp is " << a + (int)b << endl;
  cout << "exp is " << a + int(b) << endl;
  return 0;
}