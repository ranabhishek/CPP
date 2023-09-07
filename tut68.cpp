//template function overloading

#include<iostream>
using namespace std;

template<class T>
class Harry
{
    public:
    T data;
    Harry(T a)
    {
        data =a;
    }
    void display();
    /* {
        cout<<"the value of data is :: "<<data<<endl;
    } */
};


template<class T>
void Harry<T>:: display()
{
        cout<<"the value of data is :: "<<data<<endl;
}

template<class T>
void func(T a)
{
    cout<<"i am first func"<<a<<endl;
}

template<class T>
void func1(T a)
{
    cout<<"i am first func"<<a<<endl;
}


int main()
{
    /* Harry<int> h(5);
    cout<<h.data<<endl; */

   /*  Harry<char>h('c');
    cout<<h.data<<endl;
    h.display(); */

    func(4);//exact match takes the highestv priority
        return 0;
}