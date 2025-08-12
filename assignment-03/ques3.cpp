//Define a class LargestNumber and define an instance member function to find the
//Largest of three Numbers using the class.
#include<iostream>
using namespace std;

class LargestNumber
{
    private:
      int num1,num2,num3;
      int largest;
      public:
      void set(int a,int b,int c)
      {
         num1=a;
         num2=b;
         num3=c;
      }
      int get()
      {
         return largest;
      }

      void largestNumber()
      {
          if(num1>num2)
          {
            if(num1>num3)
             largest=num1;
            else
            largest= num3;
              
          }
          else
          {  if(num2>num3)
             largest= num2;
             else
             largest= num3;
          }


      }
};
int main()
{
    LargestNumber ln1;
    ln1.set(9,4,8);
    ln1.largestNumber();
    cout<<ln1.get();
}
