#include<bits/stdc++.h>
using namespace std;

int main()
{

    unordered_multimap<string ,int> m({
        {"prateek" ,100},
        {"jatin",200},
        {"fayaz" , 300},
        {"fayaz",400}

       });

    unordered_multimap<string,int>::iterator x;

    for(x = m.begin() ; x != m.end() ; x++)
    {
       cout<<"Key : "<<x->first<<" , Value : "<<x->second<<endl;
    }

    return 0;
}
