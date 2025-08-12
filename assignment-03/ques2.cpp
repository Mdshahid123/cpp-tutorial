//Define a class Factorial and define an instance member function to find the Factorial
//of a number using class.

#include<iostream>
using namespace std;

class factorial
{   private:
      int fact;
      int n;
    public:
        void set(int num)
        {
            n=num;
        }
        int get()
        {
            return fact;
        }
        void calculatefactorial()
        {   
           int  f=1;
            for(int i=1;i<=n;i++)
            {
                f=f*i;
            }
            fact=f;
    
        }
};
int main()
{
   factorial f1;
   f1.set(6);
   f1.calculatefactorial(); 
   cout<<f1.get();
}
