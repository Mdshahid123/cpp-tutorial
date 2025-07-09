#include<bits/stdc++.h>
using namespace std;

int main()
{

   unordered_set<string> s;

   s.insert("prateek");
   s.insert("jain");
   s.insert("pankaj");
   s.insert("ankit");

   unordered_set<string>::iterator x;

   for( x = s.begin() ; x != s.end() ;x++)
   {
        cout<<*x<<" ";
   }

    cout<<endl;
   string key = "jatin";

   if(s.find(key) == s.end())
   {
     cout<<"Key Not Found";
   }
   else
   {
        cout<<"Key Found";
   }

   return 0;
}
