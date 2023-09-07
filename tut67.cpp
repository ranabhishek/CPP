//FUNCTION TEMPLATES

#include<iostream>
using namespace std;


/* float func_avg(int a,int b)
{
    float avg=(a+b)/2.0;
    return avg;
} */

template<class T>
void swapp(T &a,T &b)
{
    T temp=a;
    a=b;
    b=temp;
}
/* template<class T1,class T2>
float func_avg2(T1 a,T2 b)
{
    float avg=(a+b)/2.0;
    return avg;
} */
/* template<>
class a
{

}; */

int main()
{
    /* float a,b;
//    a=func_avg(5,2);
    b=func_avg2(5,2);
    cout<<b<<endl; */

    int x=5,y=7;
    swapp(x,y);
    cout<<x<<endl<<y;
    return 0;
}