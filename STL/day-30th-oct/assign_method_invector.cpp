#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int>v;
    
    v.assign(5,10);// it will be assign 10  5 times

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<v.data();




}