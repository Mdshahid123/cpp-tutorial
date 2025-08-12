//
#include<iostream>
using namespace std;
class item
{
   public:
     friend void fun();
};
class A
{
    public:
      void fun();
};

void A:: fun()
{
    cout<<"hello";
}

int main()
{   item i1;
    A a1;
    fun();
    a1.fun();
    return 0;
}