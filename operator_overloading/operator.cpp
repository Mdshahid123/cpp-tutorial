//make a program to add a two complex number 
//or overload a binary + operator to add two complex number

#include<iostream>
using namespace std;

class complex
{
    private:
        int real,img;
    public:
        setData(int x,int y)
        {
            real=x;
            img=y;

        }

        void showData()
        {
            cout<<real<<"+"<<img<<"i"<<endl;
        }

       complex operator+(complex c)
        {    complex temp;
             temp.real=real+c.real;
             temp.img=img+c.img;
             return temp;
        }

};

int main()
{
    complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(5,6);
    c3=c1+c2;//as here we have a user defined operand on both side of +operator but + operator don't know how to add userdefined data type bcz it inly know how to add a primitive or predfined data type so we have to defined a new meaning to the + operaotr here for user defiend data type so that comiler thakes that meaning of +  not the predeifned dmeaning
    c1.showData();
    c2.showData();
    c3.showData();



}