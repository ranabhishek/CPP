//cpp : file I/O [reading and writing]
/*
*3 useful classes under fstream
1=> fstreambase
2=> ifstream => derived from 1.
3=> ofstream=> derived from 1.
*READ OPERATION
ifstream in("this.txt");
string st;
in>>st;
*WRITE  OPERATION
ofstream out("this.txt");
string st="HARRY";
out<<st;
*/

#include<fstream>
#include<iostream>
using namespace std;

int main()
{
    //connecting our file with hout stream
    /* ofstream hout("sample60.txt");
    cout<<"Enter your name :: ";
    string name;
    cin>>name;

    hout<<"My name is :: "<<name; */

    ifstream bin("sample60.txt");
    string content;
    bin>>content;
    cout<<"the content of this file is :: "<<content;
    bin.close();
    return 0;
}