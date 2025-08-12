//you have given a complex number 2+3i and to have to chnage it to -2-3i


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
            cout<<"("<<real<<")"<<"+"<<"("<<img<<")"<<"i"<<endl;
        }

      complex operator-()
        {    complex temp;
            temp.real=-real;
            temp.img=-img;
            return temp;
        }

       

};

int main()
{
    complex c1,c2;
    c1.setData(3,4);
    c1.showData();
      c1=-c1;
    c1.showData();



}