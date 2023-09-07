//MULTIPLE PARAMETERS TEMPLATES

#include<iostream>
using namespace std;

/*
template <class T1,class T2.........>

class A
{
    //body;
}

*/
template<class T1,class T2>
class nyClass
{
    public:
    //int data1;
    T1 data1;
    //char data2;
    T2 data2;

    nyClass(T1 d,T2 f)
    {
        data1=d;
        data2=f;
    }

    void display()
    {
        cout<<this->data1<<endl<<this->data2;
    }

};

int main()
{
    nyClass<int,char>obj(1,'c');
    obj.display();
    return 0;
}