// INHERITANCE => Reusability




#include<iostream>
using namespace std;

//Base Class
class Employee
{
    public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id=inpId;
        salary=34;
    }
    Employee(){}
};

//Derive Class
/* class {{Deriver_ClassNAME}}:{{visibility mode}}{{base class name}}
{
}

PRIVATE MEMBERS OF THE BASE CLASS NEVER INHERITED

1. default visibility mode is PRIVATE 
2. Public  visibility Mode: Public members of the base class becomes public member of the derived class 
3. Private visibility Mode: Public members of the base class becomes private member of the derived class 
*/




//creating a derived class 

class Programmer : public Employee
{
    public:
    int language_code;
    Programmer(int impId)
    {
        id=impId;
        language_code=9;
    }
    
    void getData()
    {
        cout<<id<<endl;
    }
};






int main()
{
    Employee Harry(1),Rohan(2);
    cout<<Harry.salary<<endl;
    cout<<Rohan.salary<<endl;
    Programmer skillF(10);
    cout<<skillF.language_code<<endl;
    cout<<skillF.id<<endl;
    return 0;
}