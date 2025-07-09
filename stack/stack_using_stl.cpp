#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<int> s;
    //empty
    bool b=s.empty();
    cout<<b<<endl;
    //push
    s.push(5);
    s.push(6);
    s.push(7);
    //size
    cout<<"size="<<s.size()<<endl;
    //top
    cout<<"top="<<s.top()<<endl;
    //pop()
    s.pop();
    //size
    cout<<"size="<<s.size()<<endl;
    //top
    cout<<"top="<<s.top()<<endl;
    //empty
    bool c=s.empty();
    cout<<c<<endl;


}