#include <iostream>
using namespace std;
int main()
{
   /*  int a[5];int i=0;
    cout<<"enter eements of array"<<endl;
 /*    for(i=0;i<5;i++) */
   /* while(i<5)
      {
      cin>>a[i];
      i++;
      } */
   /*    cout<<"elements is array are :: "<<endl; */
   /* for(i=0;i<5;i++)  */

   /*  while(i>0)
     {
        /*  cout<<"value of i is"<<i<<endl; */
   /*   cout<<"elements is array are :: "; */

   /*    cout<<a[i-1]<<endl; */
   /* i--;  */
   int marks[] = {10, 20, 30, 40, 50};
   int *p = marks;
   cout << "math marks[0]  :: " << marks[0] << endl;
   cout << "math marks[1]  :: " << marks[1] << endl;
   cout << "math marks[2]  :: " << marks[2] << endl;
   cout << "math marks[3]  :: " << marks[3] << endl;
   cout << "math marks[4]  :: " << marks[4] << endl;
   cout << "the value of marks[0] is  :: " << *p << endl;
   cout << "the value of marks[1] is  :: " << *(p + 1) << endl;
   cout << "the value of marks[2] is  :: " << *(p + 2) << endl;
   cout << "the value of marks[3] is  :: " << *(p + 3) << endl;
   cout << "the value of marks[4] is  :: " << *(p + 4) << endl;
   return 0;
}
