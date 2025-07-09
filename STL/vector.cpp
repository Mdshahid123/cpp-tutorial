#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    //create vector
    // vector<int> v;
    // vector<int> v1(5,2);
    //size and capacity
    // cout<<"size="<<v.size()<<" and capacity="<<v.capacity()<<endl;
    // v.push_back(2);
    // v.push_back(2);
    // v.push_back(2);
    // cout<<"size="<<v.size()<<" and capacity="<<v.capacity()<<endl;
    //update the value
    // v[1]=5;
    // cout<<"size="<<v1.size()<<" and capacity="<<v1.capacity()<<endl;
    // v1.push_back(8);
    // cout<<"size="<<v1.size()<<" and capacity="<<v1.capacity()<<endl;

    //delete value from vector
    // vector<int>vnew;
    // vnew.push_back(4);
    // vnew.push_back(8);
    // vnew.push_back(12);
    // vnew.push_back(14);
    // cout<<"size="<<vnew.size()<<" and capacity="<<vnew.capacity()<<endl;
    // vnew.pop_back();
    // cout<<"size="<<vnew.size()<<" and capacity="<<vnew.capacity()<<endl;
    // //erase the element of an vector

    // vnew.erase(vnew.begin()+1);
    // cout<<"size="<<vnew.size()<<" and capacity="<<vnew.capacity()<<endl;

    //print the lement 

    // for(int i=0;i<vnew.size();i++)
    // {
    //     cout<<vnew[i]<<" ";
    // }

    //clear all elemnt 
    // vnew.clear();
    // cout<<"size="<<vnew.size()<<" and capacity="<<vnew.capacity()<<endl;





//  vector<int>arr;
//  arr.push_back(6);
//  arr.push_back(7);
//  arr.push_back(19);
//  arr.push_back(18);
//  arr.push_back(17);
//  //printing the first element
//  cout<<arr[0]<<endl;
//  cout<<arr.front()<<endl;

//  //printing the second element 
//  cout<<arr[arr.size()-1]<<endl;
//  cout<<arr.back()<<endl;


//  //copy one value of one vector to onother

//  vector<int> a;

//  a=arr;

//  for(auto it=arr.begin();it!=arr.end();it++)
//  {
//     cout<<*it<<" ";
//  }

//  cout<<endl;

//  for(auto i:a)
//  {
//     cout<<i<<" ";
//  }

vector<int> v;
v.push_back(5);
v.push_back(10);
v.push_back(15);
v.push_back(20);

//sort in decreasing  order

sort(v.begin(),v.end());

for(auto it=v.begin();it!=v.end();it++)
 {
    cout<<*it<<" ";
 }

 //sort in increasing  order

//  sort(v.begin(),v.end(),greater<int>());

//  cout<<endl;

//  for(auto it=v.begin();it!=v.end();it++)
//  {
//     cout<<*it<<" ";
//  }

 cout<<endl;

//search in binary search

cout<<binary_search(v.begin(),v.end(),20)<<endl;;

//finding the index

cout<<find(v.begin(),v.end(),15)-v.begin();

return 0;
}