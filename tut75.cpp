// FUNCTION OBJECTS (functor):: function wrapped in a class so that it is available like an object

#include<functional>
#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int arr[]={112,3233,44,132,354,77};
    //sort(arr,arr+5);
    sort(arr,arr+6,greater<int>());

    for(int i=0;i<6;i++)
    {
    cout<<arr[i]<<endl;
    }
    return 0;
}