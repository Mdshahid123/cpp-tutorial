//5+c1 is not possible bcz 5.+(c1) but 5 is not a object 

//so 5+c1 operator overlaoding is not  possible trough the member operatior overloading but possible through the friend function operator overloading
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

      friend complex operator+(int,complex);
        
       

};

complex operator+(int k,complex c)
{
    complex temp;
    temp.real=c.real+k;
    temp.img=c.img+0;
    return temp;
}

int main()
{
    complex c1,c2;
    c1.setData(3,4);
    c1.showData();
    c1=5+c1;//0perator+(5,c1)
    c1.showData();



}