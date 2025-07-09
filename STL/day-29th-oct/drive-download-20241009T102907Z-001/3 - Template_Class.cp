#include<iostream>
using namespace std;

template <class T1 = int,class T2 = int,class T3 = int>

class Multi
{
    public :
        T3 x;
        T2 y;

    T1 multiplication()
    {
        return (x*y);
    }
};

int main()
{
    Multi <int,int,float>m;

    m.x = 5;
    m.y = 6;

    cout<<"Multiplication of numbers is "<<m.multiplication();

    return 0;
}
