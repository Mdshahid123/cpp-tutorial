#include<iostream>
using namespace std;

class complex
{
    private:
    int a;
    int b;
    public:
    complex(int a,int b)
    {
        this->a=a;
        this->b=b;
    }
    complex(complex &c)
    {
        a=c.a;
        b=c.b;   
    }
    void showdata()
    {
        cout<<"a="<<a<<" "<<"and"<<" "<<"b="<<b;
    }

};

int main()
{
      complex c1(3,4);
      complex c2(c1);
      c1.showdata();
      cout<<endl;
      c2.showdata();
      return 0;
}
//note-in cpp if we don't intilalize the variable then it contain garbage value
