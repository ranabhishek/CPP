#include<iostream>
using namespace std;
class shop
{
   private:

   int itemid[100];
   int itemprice[100];
   int counter;

   public:

       void initcounter(void)
       {
          counter=0;
          }
       void getprice(void);
       void setprice(void);
       void displayprice(void);
};

void shop:: setprice(void)
{
   cout<<"enter id of itemno "<<counter+1<<endl;
   cin>>itemid[counter];
    cout<<"enter price of item"<<endl;
   cin>>itemprice[counter];
   counter++;
}
void shop:: displayprice(void)
{
   for(int i=0;i<counter;i++)
   {
      cout<<"price of item with id "<<itemid[i]<<" and price "<<itemprice[i]<<endl;
   }
}

int main()
    {
       shop dukaan;
       dukaan.initcounter();
       dukaan.setprice();
        dukaan.setprice();
         dukaan.setprice();
          dukaan.setprice();
          dukaan.displayprice();

       return 0;
    }