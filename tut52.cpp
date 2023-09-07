//array of objects

#include<iostream>
using namespace std;

class shop
{
    int id;
    float price;
    public:
    void set_data(int a,int b)
    {
        id=a;
        price=b;
    }
    void get_data(void)
    {
        cout<<"code of the item is :: "<<id<<endl;
        cout<<"price of item is :: "<<price<<endl;
    }
};

int main()
{
    int size=3;
//  int *ptr=&size;
//  int *ptr=new int[34];

    shop *ptr=new shop[size];
    shop *ptrTemp=ptr;
    int p,i;
    float q;
    for(i=0;i<size;i++)
    {
        cout<<"ID and price of item "<<i+1;
        cin>>p>>q;
//        (*ptr).set_data(p,q);
        ptr->set_data(p,q);
        ptr++;
    }
    for(i=0;i<size;i++)
    {
        cout<<"item number :: "<<i+1<<endl;
        ptrTemp->get_data();
        ptr++;
    }
    return 0;
}