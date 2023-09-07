#include<iostream>
using namespace std;
int main()
{
    //      IF ELSE
   /*  int age;
    cout<<"tell age"<<endl;
    cin>>age;
    if((age<18)&&(age>0))
    {
        cout<<"not invited"<<endl;
    }
    else if(age==18)
    {
        cout<<"pass"<<endl;
    }
    else if(age<1)
    {
        cout<<"not yet born"<<endl;
    }
    else
    {
        cout<<"invited"<<endl;
    } */
    //     SWITCH
    int age;
    cout<<"enter "<<endl;
    cin>>age;
    switch(age)
    {
        case 18:
        cout<<"u r 18"<<endl;
        break;
        case 22:
        cout<<"you r 18"<<endl;
        break;
        case 2:
        cout<<"u r 2"<<endl;
        break;
        default:
        cout<<"no special cases"<<endl;
        break;
    }
    return 0;
}