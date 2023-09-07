#include <iostream>
using namespace std;
// FUNCTION PROTOTYPE
void p(void);
int sum(int a, int b);
int main()
{
    int num1, num2;
    cout << "enter 1st num" << endl;
    cin >> num1;
    cout << "enter 2nd num" << endl;
    cin >> num2;
    // num1 & num2 are actual parameters
    cout << "sum of num1 and num2 is::" << sum(num1, num2) << endl;
    p();
    return 0;
}
int sum(int a, int b)
{
    // FORMAL P ARAMETERS A AND B WILL BE TAKING VALUES FROM ACTUAL PARAMETERS NUM1 AND NUM2
    int c = a + b;
    return c;
}
void p()
{
    cout << "hello, good morning";
}