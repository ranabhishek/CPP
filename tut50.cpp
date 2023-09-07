//POINTERS

#include<iostream>
using namespace std;

int main()
{
    /* int a=4;
    int *ptr=&a;
    *ptr=999;
    out<<"the value of a is :: "<<*(ptr)<<endl; */


    //new keyword

//    int *p=new int(40);
//    float *p=new float(34.3);
//    cout<<"the value at address p is "<<*(p)<<endl;
      int *arr=new int[3];
      arr[0]=12;
      *(arr+1)=20;
      arr[2]=23;
      delete[] arr;
      cout<<"the value of a[0] is :: "<<arr[0]<<endl;
      cout<<"the value of a[1] is :: "<<arr[1]<<endl;
      cout<<"the value of a[2] is :: "<<arr[2]<<endl;
      

    return 0;

}