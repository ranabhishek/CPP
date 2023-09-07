#include<iostream>
#include<fstream>

/*
CPP classes
1==> fstreambase
2==> ifstream -->derived from fstreambase
3==> ofstream -->derived from fstreambase

WAYS TO OPEN THE FILE:: 
1 ==> using the coinstructor.
2 ==> using the member function open() of the class.
*/


using namespace std;

int main()
{
    string st="abhishek bhai";
    string st2;
    /*  //opening file using constructor and writing in it.
    ofstream out("sample60.txt");//WRITE OPERATION
    out<<st;   */

    ifstream in("sample60b.txt");
    //in>>st2;
    getline(in,st2);
    cout<<st2; 
    return 0;
}