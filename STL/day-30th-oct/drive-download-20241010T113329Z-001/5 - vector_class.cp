#include<iostream>
#include<vector>
#include<iterator>
#include<tuple>
using namespace std;

int main()
{
    vector <int>v;
    vector <int>v2 = {1,2,3};  // 1 method to assign

    for(int i = 0 ; i < 5 ; i++)
       v.push_back(i*100);      // 2 method to assign

    v.swap(v2);


    for(int i = 0 ; i < v.size() ; i++)
        cout<<v.at(i)<<endl;

    cout<<"size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;

    v.resize(4);
    v.shrink_to_fit();
    for(int i = 0 ; i < v.size() ; i++)
        cout<<v.at(i)<<endl;

    cout<<"size = "<<v.size()<<endl;
    cout<<"Capacity = "<<v.capacity()<<endl;

    if(v.empty() == true)
    {
        cout<<"Vector is Empty"<<endl;
    }
    else {
        cout<<"Vector is not Empty"<<endl;
    }


    // Approach 1

    vector<int>::iterator x;


    for(auto x = v.rbegin(); x != v.rend() ; ++x)
    {
        cout<<*x<<" ";
    }

    // Approach 2
    cout<<"Second Approach"<<endl;
    x = v.begin();

    for(int i = 0; i<v.size() ; i++)
    {
        cout<<x[i]<<" ";
    }

    cout<<endl;

    vector <int> v3;
    v3.assign(5,10); // 3 It will assign 10 .. 5 times
    v3.insert(v3.begin(),12);
    v3.insert(v3.end(),23);

     for(int i = 0; i<v3.size() ; i++)
    {
        cout<<v3[i]<<" ";
    }



    return 0;
}
