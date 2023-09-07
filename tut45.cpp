// VIRTUAL BASE CLASS ==> member function flow only once.

#include <iostream>
using namespace std;

/* student--->test
student --->sports
test --->result
sports --->result */

class student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "your roll number is :" << roll_no << endl;
    }
};

class test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(int m1, int m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "your result is here :: " << endl
             << "MAths :: " << maths << endl
             << "physics :: " << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    float score;

public:
    void set_score(float x)
    {
        score = x;
    }
    void print_score(void)
    {
        cout << "your score is :: " << score << endl;
    }
};

class result : public test, public sports
{
private:
    float total;

public:
    void dsiplay(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "your total score is :: " << total << endl;
    }
};

int main()
{
    result harry;
    harry.set_marks(78, 98);
    harry.set_number(4288);
    harry.set_score(9);
    harry.dsiplay();
    return 0;
}