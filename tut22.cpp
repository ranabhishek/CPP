//   OOPS  :::: CLASSES AND OBJECTS
//   C++ -->INTIIALLY CALLED  --C WITH CLASSES
//   CLASS --> EXTENSIONS OF STRUCTURE(IN C)
//   STRUCTURE HAD LIMITATIONS
//   ---> MEMBERS ARE PUBLIC
//   --->NO METHODS
//   CLASSES  -->STRUCTURES +MORE
//            -->CAN HAVE METHODS AND PROPERTIES
//            -->CAN MAKE FEW MEMBERS AS PUBLIC AND SOME AS PRIVATE
//   STRUCTURES IN C++ ARE TYPEDEFINED
//   CAN DECLARE OBJECTS WITH CLASS DECLARATION
/*    class employee
   {
       class definition
   }a,b,c */
// NESTING OF MEMBER FUNCTIONS

#include <iostream>
#include <string>
using namespace std;

class binary
{
    // private:   BY DEFAULT EVERY MEMBER IN CLASS IS IN PRIVATE
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "enter a binary number" << endl;
    cin >> s;
}
void binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "not a binary number" << endl;
            exit(0);
        }
    }
}
void binary ::ones(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "displaying binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary b;
    b.read();
    // b.chk_bin();
    // b.display();
    b.ones();
    b.display();
    return 0;
}