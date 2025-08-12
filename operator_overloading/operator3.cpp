//add a primitive data and complex data that is 5+complex and complex+5
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

      complex operator+(int x)
        {    complex temp;
             temp.real=real+x;
             temp.img=img+0;
            return temp;
        }

       

};

int main()
{
    complex c1,c2;
    c1.setData(3,4);
    c1.showData();
      c1=c1+5;//c1.+(5);
    c1.showData();



}

//here c1+5 operator overloading using member operttor is poassible bcz c1+5 treated as c1.+(5) but 5+c1 is not possible bcz 5.+(c1) but 5 is not a object 

//so 5+c1 operator overlaoding is possible trough the friend function