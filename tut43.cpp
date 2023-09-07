//Ambiguity in CPP INHERITANCE

#include<iostream>
using namespace std;

class base1
{
    public:
    void greet()
    {
        cout<<"how are you..."<<endl;
    }
};

class base2
{
    public:
    void greet()
    {
        cout<<"kaise ho ?"<<endl;
    }
};



class derived :public base1,public base2
{
    public:
    void greet()
    {
        base2 :: greet();
    }
};

class B
{
    public:
    void say()
    {
        cout<<"he;lo my beautid=ful people."<<endl;

    }
};

class D : public B 
{
    /* public:
    void say()
    {
        cout<<"he;lo my beautid=ful people."<<endl;

    } */
};

int main()
{
    //ABMBIGUITY 1
    /* base1 base1obj;
    base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    derived d;
    d.greet(); */


    //AMBIGUITY 2
    B b;
    b.say();
    D d;
    d.say();

    return 0;
}