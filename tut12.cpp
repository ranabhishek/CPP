#include<iostream>
using namespace std;
int main()
//POINTER
{
int a=3;
int*b=&a;
int**c=&b;//POINTER TO POINTER
cout<<"address of a "<<b<<endl;
cout<<"address of a "<<&a<<endl;
cout<<"value of b "<<*b<<endl;
cout<<"address of b is "<<&c<<endl;
cout<<"address of b "<<&b<<endl;
// & --->address of operator
//*---->dereference operator
return 0;
}