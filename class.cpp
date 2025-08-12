//make a class to represent the complex class.store real and imaginary part also define the methods to set the values of real and img part of complex number .define one more number to display the complex number
#include<iostream>
using namespace std;

class complex
{
    private:
        int real;
        int img;

    public:
        void setData(int x,int y)
        {
           real=x;
           img=y;
        }
        void showComplex()
        {
            cout<<real<<"+"<<img<<"i"<<endl;
        }

};

int main()
{
    complex c1;
    c1.setData(2,3);
    c1.showComplex();
}