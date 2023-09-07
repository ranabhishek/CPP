// there are two types of hgeader files:
//1 system define header files.COMES WITRH COMPILER
#include<iostream>
//2.user define header file.WRITTEN BY PROGRAMMER.
#include"this.h"
using namespace std;
int main()
{
    int a=4,b=5;
    cout<<"operators is c++"<<endl;
    //ARITHMETIC OIPERATOR
    cout<<"THE VALUE OF A+B is  "<<a+b<<endl;
    cout<<"THE VALUE OF A-B is  "<<a-b<<endl;
    cout<<"THE VALUE OF A*B is  "<<a*b<<endl;
    cout<<"THE VALUE OF A/B is  "<<a/b<<endl;
    cout<<"THE VALUE OF A%B i  "<<a%b<<endl;
    cout<<"THE VALUE OF A++ is  "<<a++<<endl;
    cout<<"THE VALUE OF B++ is  "<<b++<<endl;
    cout<<"THE VALUE OF ++A is  "<<++a<<endl;
    cout<<"THE VALUE OF ++B is  "<<++b<<endl;
    cout<<"THE VALUE OF --A is  "<<a++<<endl;
    cout<<"THE VALUE OF --B is  "<<b++<<endl;
    cout<<endl;
    //ASSIGNMENT OPERATOR"="
    //COMPARISON OPERATOR
    cout<<"the value of a==b  "<<(a==b)<<endl;
    cout<<"the value of a!=b  "<<(a!=b)<<endl;
    cout<<"the value of a<=b  "<<(a<=b)<<endl;
    cout<<"the value of a>=b  "<<(a>=b)<<endl;
    cout<<"the value of a>b  "<<(a>b)<<endl;
    cout<<"the value of a<b  "<<(a<b)<<endl;
    cout<<endl;
    //LOGICAL OPERATOR
    cout<<"the value of AND OPERATOR  "<<((a==b)&&(a<b))<<endl;
      cout<<"the value of OR OPERATOR  "<<((a==b)||(a<b))<<endl;
        cout<<"the value of NOT OPERATOR  "<<(!(a==b)&&(a<b))<<endl;
   return 0;
}