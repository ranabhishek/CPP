#include<iostream>
#include<cmath>
using namespace std;

class simple_calculator
{
    int a,b;
    public:
    void getData_simple()
    {
        cout<<"Enter the value of a :: "<<endl;
        cin>>a;
        cout<<"Enter the value of b :: "<<endl;
        cin>>b;
    }
    void perform_operations_simple()
    {
        cout<<"the value of a + b is :: "<<a+b<<endl;
        cout<<"the value of a - b is :: "<<a-b<<endl;
        cout<<"the value of a * b is :: "<<a*b<<endl;
        cout<<"the value of a / b is :: "<<a/b<<endl;
    }
};

class scientific_calculator : public simple_calculator
{
    int a,b;
    public:
    void getData_scientific()
    {
        cout<<"Enter the value of a :: "<<endl;
        cin>>a;
        cout<<"Enter the value of b :: "<<endl;
        cin>>b;
    }
    void perform_operations_scientific()
    {
        cout<<"the value of cos(a)  is :: "<<cos(a)<<endl;
        cout<<"the value of sin(a)  is :: "<<sin(a)<<endl;
        cout<<"the value of exp(a)  is :: "<<exp(a)<<endl;
        cout<<"the value of tan(a)  is :: "<<tan(a)<<endl;
    }

};

class Hybrid_calculator : public simple_calculator,public scientific_calculator
{
};
int main()
{
    //simple_calculator obj;
   /*  scientific_calculator obj;
    obj.getData();
    obj.perform_operations(); */

    Hybrid_calculator hc;
    hc.getData_simple();
    hc.perform_operations_simple();
    hc,getData_scientific();
    hc.perform_operations_scientific();
    return 0;
}
