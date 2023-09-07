#include<iostream>
using namespace std;
/* int fact(int n)
{
    if(n<=0)
    {
        return 1;
    }
    else
    {
   return n*fact(n-1);
    }
} */
int fib(int a)
{
if(a<2)/*  1 1 2 3 5 8 */
{
    return 1;
}
else
{
    return fib(a-2)+fib(a-1);
}
}
int main()
{
    int a;
    cout<<"enter a number"<<endl;
    cin>>a;
    cout<<"fibonnaci of "<<a<<" is "<<fib(a)<<endl; 
    return 0;
} 