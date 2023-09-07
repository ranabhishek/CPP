#include<iostream>
using namespace std;

//Destructor never takes an argument nor return any value
int count=0; 


class num
{
    public:
    num()
    {
        count++;
        cout<<"This is when Constructor is called for object number "<<count<<endl;
    }
    ~num()
    {
        cout<<"This is time when Destructor is called for object "<<count<<endl;
        count--;
    }

};

int main()
{
    cout<<"Inside main function"<<endl;
    cout<<"Creating 1st object"<<endl;
    num n1;
    {
        cout<<"entering this block"<<endl;
        cout<<"Creating two more objects"<<endl;
        num n2,n3;
        cout<<"Exiting this function"<<endl;
    }
    cout<<"back 2 main"<<endl;

    return 0;
}