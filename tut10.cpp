#include <iostream>
using namespace std;
int main()
{
  // LOOPS IN C++
  //  1 FOR LOOP
  /*   for(int i=0;i<10;i++)
    cout<<i<<endl; */
  // 2 WHILE LOOP
  /*   int x;
    int s=0;
    cout<<"enter a no."<<endl;
    cin>>x;
    while(x>0)
    {
        int y=x%10;
        s=s*10+y;
        x=x/10;
    }
cout<<s; */
  //   do whiile loop
  /* int i=1;
  do
  {
  cout<<i<<endl;
  i++;
  }
  while(i<=30); */
  int i = 1, s = 0;
  do
  {
    s = i * 6;
    cout << s << endl;
    i++;
  } while (i <= 10);
  return 0;
}