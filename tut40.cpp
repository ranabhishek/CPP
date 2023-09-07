// Multi Level Inheritance

#include <iostream>
using namespace std;

class student
{
protected:
    int Roll_number;

public:
    void set_number(int);
    void get_rollNumber(void);
};

void student ::set_number(int r)
{
    Roll_number = r;
}

void student ::get_rollNumber()
{
    cout << "the roll number is : " << Roll_number << endl;
}

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}

void exam ::get_marks()
{
    cout << "The marks in Physics are :: " << physics << endl;
    cout << "The marks in Maths are :: " << maths << endl;
}

class result : public exam
{
    float percentage;

public:
    void display()
    {
        get_rollNumber();
        get_marks();
        cout << "your percentage is :: " << (maths + physics) / 2 << endl;
    }
};

int main()
{
    /*
    If we are inheriting b from a and c from b.  {a-->b-->c}
    1.a is the base clas  for b and b is the base class for c
    2.a-->b-->c is called inheritance path
    */
    result harry;
    harry.set_number(420);
    harry.set_marks(94.0, 90.0);
    harry.display();
    return 0;
}