//Define a class ReverseNumber and define an instance member function to find
//Reverse of a Number using class.
#include<iostream>
using namespace std;
class ReverseNumber
{
    private:
      int actualnum;
      int reversenum;

    public:
     void set(int num)
     {
        actualnum=num;
     }
     int getReverseNum()
     {
        return reversenum;
     }

     int getActualNum()
     {
        return actualnum;
     }
     void calculateReverse()
     {  
         int reversed=0;
         int num=actualnum;
         while (num != 0)
         {
            int digit = num % 10;           // Get the last digit
            reversed = reversed * 10 + digit; // Append digit to reversed number
            num = num / 10;                 // Remove last digit from num
         }

          reversenum=reversed;

     }

};

int main()
{
    ReverseNumber o1;
    o1.set(675);
    o1.calculateReverse();
    cout<<"revrser of "<<o1.getActualNum()<<" is:"<<o1.getReverseNum();
    
}