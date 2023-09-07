#include<iostream>
using namespace std;

class employee
{
    private:
int id;
static int count;//variable connected to class    
    public:
void setdata(void)
{
    cout<<"enter id"<<endl;
    cin>>id;
    count++;
}
void getdata(void)
{
    cout<<"id is "<<id<<"  and this is id number  "<<count<<endl;
}
static void getcount(void)
{
    // cout<<id  SHOWS AN ERROR
    cout<<"the value of count is  "<<count<<endl;
}
};


int employee :: count;//=1000;// DEFAULT VALUE OF STATIC VAR IS 0  //COUNT IS THE STATIC DATA MEMBER OF CLASS EMPLOYEE

int main()
{
    employee a,b,c;

 
    a.setdata();
    a.getdata();
    employee :: getcount();   // :: SCOPE RESOLUTION OPERATOR


    b.setdata();
    b.getdata();
    employee :: getcount();

    c.setdata();
    c.getdata();
    employee :: getcount();

    return 0;
}