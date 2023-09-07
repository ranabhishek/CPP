/* #include <iostream>
using namespace std;
// this ia a comment
/*this
is
a
mlc
int main()
{
    int sum = 6;
    cout << "Hello WORLD" << sum;
    return 0;
} */

#include<iostream>
using namespace std;

int x = 1;
int main()
{
    int x = 2;
    {
        int x = 3;
        cout << ::x << endl;
    }
    return 0;
}