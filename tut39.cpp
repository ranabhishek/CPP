#include<iostream>
using namespace std;

class base
{
    protected://can be inherited
    int a;
    private:
    int b;
};

/*For a protected member

                            Public Derivation            Private Derivation           Protected Derivation                
1.Private Members              Not Inherited                Not Inherited              Not inherited 
2.Protected Members             Protected                      Private                   Protected    
3.Public Members                 Public                        Private                   Protected
*/


class derived : protected base
{

};


int main()
{
    base b;
    derived d;
    cout<<b.a; //will not work since a is protected in both base and derived class.
    return 0;

}