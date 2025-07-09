#include<iostream>
using namespace std;
template <class T,class F = int,class P = int>
P add(T x ,F y)
{
    return (x+y);
}
int main()
{
    float sum1 = add<int,int,float>(2.5,3);
    int sum2 = add<int>(5,3);

    cout<<"Addition of number is "<<sum1<<endl;
    cout<<"Addition of number is "<<sum2;
    return 0;
}
