//check wheather the given number is  a tern in a fibonacci series or not 
#include<iostream>
using namespace std;

int fib(int n)
{   int fib;
    int fib1=1;
    int fib2=1;
    if(n<=2)
    {
        return 1;
    }
    for(int i=3;i<=n;i++)
    {
        fib=fib1+fib2;
        fib1=fib2;
        fib2=fib;
    }

    return fib;
}

int main()
{  int num,flag=0;
   cout<<"enter the number:";
   cin>>num;
   cout<<"for a given number binonacci series is:";
   for(int i=1;;i++)
   {
        int value=fib(i);
        cout<<value<<" ";
        if(value==num)
        {
            flag=1;
            break;

        }
        if(num<value)
        break;
       
   }
   
   cout<<endl;
   if(flag==1)
   cout<<"as clear from  above"<<" "<<num<<" "<<"is fib number";
   else
   cout<<"as clear from above"<<" "<<num<<" "<<"is not fibonacci number";
   return 0;

}
