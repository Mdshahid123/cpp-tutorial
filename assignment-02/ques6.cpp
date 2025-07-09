//wap the two intger value using call by refrence

#include<iostream>
using namespace std;

void swap(int &a,int &b)
{
    a=a+b;
    b=a-b;
    a=a-b;
}

int main()
{
   int a,b;
   cout<<"enter the two number :";
   cin>>a>>b;
   swap(a,b);
cout<<"after swapping value of a is:"<<a<<"and value of b:is"<<b;
}