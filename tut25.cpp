#include<iostream>
using namespace std;
class employee
{
    private:
int id;
int salary;


    public:
void setid(void)
{
    salary=122;
    cout<<"enter id of employee "<<endl;
    cin>>id;
}
void getid(void)
{
    cout<<"id of employee is "<<id<<endl;
}
};
int main()
{
   /*  employee a,b,c,d;
    a.setid();
    a.getid(); */

    employee a[4];
    for(int i=0;i<4;i++)
    {
        a[i].setid();
        a[i].getid();
    }
    return 0;
}