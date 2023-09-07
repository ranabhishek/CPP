#include <iostream>
using namespace std;

typedef struct employee
{
    int e;        // 4
    char fav;     // 1
    float salary; // 4
} e;
union money // better memory management
{
    int rice;     // 4
    char car;     // 1
    float pounds; // 4
};
int main()
{
    enum meal
    {
        breakfast,
        lunch,
        dinner
    };
    meal m1 = lunch;
    cout << m1;
    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;
    /*  e ABHISHEk;
     struct employee a;
     struct employee b;
     union money m1; */
    /*  m1.rice=34; */
    //  m1.car='c';
    /*    cout<<m1.rice;  */
    //   cout<<m1.car;
    /*   ABHISHEk.e=1;
      ABHISHEk.fav='A';
      ABHISHEk.salary=0.0;
       cout<<"tha value is "<<ABHISHEk.e<<endl;
      cout<<"tha value is "<<ABHISHEk.salary<<endl;
      cout<<"tha value is "<<ABHISHEk.fav<<endl;
      return 0; */
}