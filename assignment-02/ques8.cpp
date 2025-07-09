//define a function overloading to calculate a area of circle ,triangle and rectangle
#include<iostream>
using namespace std;
float area(float l,float b)
{
    return l*b;
}

float area(float r)
{
   return 3.14*r*r;
}

float area(float base,float height,char dummy)
{
    return 0.5 *base*height;
}

int main()
{   string ans;
    cout<<"which area you want to calculate(circle,rectangle or triangle)";
    cin>>ans;
    if(ans=="circle" )
    {   int r;
        cout<<"enter the radius of circle:";
        cin>>r;
        cout<<"area of circle is :"<<area(r);
    }

    if(ans=="rectangle" )
    {   int l,b;
        cout<<"enter the length and breadth of rectangle:";
        cin>>l>>b;
        cout<<"area of rectangle  is :"<<area(l,b);
    }

    if(ans=="triangle")
    {   int b,h;
        cout<<"enter the base and height  of triangle:";
        cin>>b>>h;
        cout<<"area of triangle is :"<<area(b,h,'t');
    }
}

//next lecture will be after 31 august