#include<iostream>
using namespace std;
int glo=6;
void sum()
{
    int a;
    cout<<"the value of global variuable is :: "<<glo<<endl;
}
int main()
{
    int glo=78;
    int a=14;
    int b=15;
    float pi =3.154;
    char ch = 'a';
    bool is=true;
    sum();
    cout<<"value of is :: "<<is<<endl;
    cout<<"this is 4th tutorial.\nhere the value of a is "<<a<<".\nthe value of b is "<<b;
    cout<<"\nthe value of pi is "<< pi;
    cout<<"\nthe value of ch is "<< ch;
     cout<<"\nthe value of glo is "<< glo;
    return 0;
}