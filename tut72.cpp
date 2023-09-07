//LIST

#include<iostream>
#include <list>

using namespace std;


void display(list <int> &lst)
{
    list<int> :: iterator it;
    for(it=lst.begin();it!=lst.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}

int main()
{
    list<int> list1;//list of length 0
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
   // list1.sort();
    display(list1);

   // list1.pop_back();
    //display(list1);
    //list1.pop_front();
   // list1.remove(9);
    //display(list1);
    list1.reverse();
    display(list1);




    list<int> list2(3);// empty list of size 7
    list<int> :: iterator iter;
    iter=list2.begin();
    *iter=34;
    iter++;
    *iter=12;
    iter++;
    *iter=23;
    iter++;
    display(list2);


    /* list1.merge(list2);
    display(list1); */







    return 0;
}