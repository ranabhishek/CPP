#include<iostream>
using namespace std;
int sum(int a,int b)
{
    int c=a+b;
    return c;
}
//CALL BY REFERENCE BY reference var
//int & 
void swapreferencevar(int& a,int& b)
{
int temp=a;
a=b;
b=temp;
//return a;
}
int main()
{
    int x=4,y=5;
   // cout<<"the sum of 4 and 5 is"<<sum(a,b);
   cout<<"the value of x and y is "<<x  <<y<<endl;
   swapreferencevar(x,y);//=766;

    cout<<"the value of x and y is "<<x<<y<<endl;
    return 0;
}