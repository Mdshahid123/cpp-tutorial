#include<iostream>
#include<deque>
#include<iterator>

using namespace std;

int main()
{
    deque<int> d;

    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_front(5);
    d.push_back(6);


    deque<int>::iterator x;

    for(x = d.begin() ; x != d.end() ;x++)
    {
        cout<<*x<<" ";
    }
    cout<<endl;

    cout<<"Size = "<<d.size()<<endl;
    cout<<"Max Size = "<<d.max_size()<<endl;
    cout<<"Front = "<<d.front()<<endl;
    cout<<"At() = "<<d.at(3)<<endl;

    d.pop_back();
    cout<<"Size after pop "<<d.size()<<endl;
    d.pop_front();
    cout<<"Back = "<<d.back()<<endl;


    return 0;
}
