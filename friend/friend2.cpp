
#include<iostream>
using namespace std;
class complex
{   private:
        int real,img;
    public:
        void setData(int x,int y){
            real=x;
            img=y;
        }

        void showData(){
            cout<<real<<"+"<<img<<"i"<<endl;
        }

        friend complex operator+(complex,complex);

};

complex operator+(complex X,complex Y)
{
    complex temp;
    temp.real=X.real+Y.real;
    temp.img=X.img+Y.img;
    return temp;
}
int main()
{
    complex c1,c2,c3;
    c1.setData(3,4);
    c2.setData(4,5);
    c1.showData();
    c2.showData();
   //c3=c1+c2;
    c3=operator+(c1,c2);
    c3.showData();
}