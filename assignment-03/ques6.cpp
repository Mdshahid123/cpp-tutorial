//Define a class Square to find the square of a number and write a C++ program to
//Count number of times a function is called.
#include<iostream>
using namespace std;
class square
{
    private:
      int num;
      int square;
      static int count;
    public:
      void setNum(int n)
      {
        num=n;
      }
      int getSquare()
      {
         return square;
      }
      void calculate()
      {  count++;
         square=num*num;
      }
      int countfc()
      {
        return count;
      }

};
int square::count=0;
int main()
{
    square o1,o2;
    int n;
    while(true)
    {
        cout<<"enter the number you want to calculate the square:";
        cin>>n;
        if(n==-1)
        break;
        o1.setNum(n);
        o1.calculate();
        cout<<o1.getSquare();
        cout<<endl;

    }
    while(true)
    {
        cout<<"enter the number you want to calculate the square:";
        cin>>n;
        if(n==-1)
        break;
        o2.setNum(n);
        o2.calculate();
        cout<<o2.getSquare();
        cout<<endl;

    }
    
    cout<<"calculate funtion called:"<<o1.countfc();
}
