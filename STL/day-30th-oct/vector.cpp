// vector  are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted with their storage being handled automatically by the container

#include<iostream>
#include<vector>
using namespace std;

int main()
{   
    //intialize the vector during declaration
    // vector <int>v={1,2,3,4,5}

    //vector declaration
    vector <int>v;
    //vetor size
    cout<<"intial size="<<v.size()<<endl;
    //vector intialization after decalaration
    for(int i=0;i<9;i++)
    v.push_back(100*i);

    //printing the vector
    cout<<"vectors element are:";
    for(int i=0;i<=v.size();i++)
    cout<<v[i]<<endl;
    cout<<"size="<<v.size()<<endl;;
    cout<<"capacity="<<v.capacity()<<endl;

    //resize the vector
    v.resize(4);
    v.shrink_to_fit();
    //printing the vector
    cout<<"vectors element are:";
    for(int i=0;i<=v.size();i++)
    cout<<v[i]<<endl;
    cout<<"size="<<v.size()<<endl;;
    cout<<"capacity="<<v.capacity();


}