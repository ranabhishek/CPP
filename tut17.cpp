#include<iostream>
using namespace std;
// inline int product(int a,int b)
// {
//     //STATIC NOT RECOMMENDEN WITH INLINE FUNCTIONS
//    // static int c=0;// this execute only once
// //c=c+1;//NEXT TIME VALUE OF C WILL RETAIN 
// return a*b+c;

// }
//DEFAULT args on extreme right
float moneyrecieved(int currMoney,float factor=1.04)
{
return currMoney*factor;
}
// int strln(const char *p)
int main()
{
    //INLINE FUNCTIONS
    // int a,b;
    // cout<<"enter value of a and b"<<endl;
    // cin>>a>>b;
    int money=100000;
    cout<<"if you have rupes in ur bank acc. u will recieve "<<moneyrecieved(money)<<"after 1 yr"<<endl;
    cout<<"if you have rupes in ur bank acc. u will recieve "<<moneyrecieved(money,1.1)<<"after 1 yr";
    // cout<<"product of a and b is "<<product(a,b)<<endl;
    // cout<<"product of a and b is "<<product(a,b)<<endl;
    // cout<<"product of a and b is "<<product(a,b)<<endl;
    // cout<<"product of a and b is "<<product(a,b)<<endl;
    // cout<<"product of a and b is "<<product(a,b)<<endl;
    // cout<<"product of a and b is "<<product(a,b)<<endl;
    // cout<<"product of a and b is "<<product(a,b)<<endl;
    // cout<<"product of a and b is "<<product(a,b)<<endl;
    // cout<<"product of a and b is "<<product(a,b)<<endl;
    return 0;
}