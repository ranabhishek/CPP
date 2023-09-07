#include <iostream>
using namespace std;
class bank
{
    int principle;
    int years;
    float rate;
    float retval;

public:
    void show();
    bank()
    {
    }
    bank(int p, int y, float r);
    bank(int p, int y, int r);
};

bank ::bank(int p, int y, float r)
{
    principle = p;
    years = y;
    rate = r;

    retval = principle;
    for (int i = 0; i < y; i++)
    {
        retval = retval * (1 + r);
    }
}

bank ::bank(int p, int y, int r)
{
    principle = p;
    years = y;
    rate = float(r) / 100;

    retval = principle;
    for (int i = 0; i < y; i++)
    {
        retval = retval * (1 + r);
    }
}
void bank ::show()
{
    cout << endl
         << "p am was " << principle;
    cout << " return value after " << years;
    cout << " is " << retval << endl;
}

int main()
{
    bank bd1, bd2, bd3;
    int p;
    int y;
    float r;
    int R;
    cout << "enter value of p y and r" << endl;
    cin >> p >> y >> r;
    bd1 = bank(p, y, r);
    bd1.show();
    return 0;
}