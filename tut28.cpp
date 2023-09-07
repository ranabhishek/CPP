#include<iostream>
using namespace std;
//FORWARD DECLARATION

class y;

class x
{
int data;
public:
void setdata(int value)
{
    data=value;
}
friend void add(x,y);
};
class y
{
    int num;
    public:
    void setvalue(int value)
    {
        num=value;
    }
    friend void add(x,y);
};
void add(x o1, y o2)
{
    cout<<"summing data of X and y objects gives me " <<o1.data+o2.num<<endl;
}
int main()
{
    x a;
    a.setdata(3);


    y b;
    b.setvalue(5);

    add(a,b);
    return 0;
}