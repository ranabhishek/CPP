#include<iostream>
using namespace std;
class point
{
    int x,y;
    public:
    point(int , int );
    void print()
    {
        cout<<"the point is ("<<x<< " ,"<<y<<")"<<endl;
    }
    /* int dis(int a,int b)
    {
        return math.sqrt()
    } */
};

point::point(int a,int b)
{
      x=a;
      y=b;
}

int main()
{
    point a(4,6);
    point b(1,2);
    a.print();
    b.print();
    return 0;
}