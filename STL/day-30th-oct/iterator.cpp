//iterator template class
#include<iostream>
#include<vector>
#include<iterator>
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

//printing the vectore using iterator
vector <int>::iterator x;
cout<<"first approch:"<<endl;
for(x=v.begin();x<v.end();x++)
cout<<*x<<endl;

//second approch
x=v.begin();
cout<<"second approch:"<<endl;;
for(int i=0;i<v.size();i++)
{
      cout<<*(x+i)<<endl;
}


}


