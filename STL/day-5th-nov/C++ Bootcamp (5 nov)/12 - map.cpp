#include<iostream>
#include<map>
#include<iterator>
using namespace std;

int main()
{


   multimap<int , int> m;

    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));
    m.insert(pair<int,int>(7,10));
    m.insert(pair<int,int>(5,50));
    m.insert(pair<int,int>(5,100));
    m.insert(pair<int,int>(5,200));

    m.erase(5);

   multimap<int,int>::iterator x;

   for(x = m.begin() ; x != m.end() ; x++)
   {
       cout<<"Key : "<<x->first<<" , Value :"<<x->second<<endl;

   }
 return 0;
}
