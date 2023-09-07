//MAPS

#include<iostream>
#include<string>
#include<map>

using namespace std;

int main()
{
    map<string,int> marksMap;
    marksMap["harry"]=98;
    marksMap["jack"]=78;
    marksMap["rohan"]=1;
    map<string,int>:: iterator itr;
    marksMap.insert({"abhishek",100});
    for(itr=marksMap.begin();itr!=marksMap.end();itr++)
    {
        cout<<(*itr).first<<" "<<(*itr).second<<"\n";
    }
    cout<<"the size is :: "<<marksMap.size()<<endl;
    return 0;
}