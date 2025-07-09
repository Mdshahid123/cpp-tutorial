// swapping two vector- we can swap two diffrent size vector bcz vector is dynamic 
//but we can't do it with array template class because array is not a dynamic it's size is fiexd

#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector <int>v1;
    vector  <int>v2;

    int n;
    int element;
    cout<<"enter the no of element for the first vector:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>element;
       v1.push_back(element);
    }
   
   cout<<"enter the no of element for the second vector:";
    cin>>n;
    for(int i=0;i<n;i++)
    {
       cin>>element;
       v2.push_back(element);
    }

    //printing the element of first vector
    cout<<"printing the first vector:";
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    //printing the second vector
    cout<<"printing second vector:";
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }
    cout<<endl;
    v1.swap(v2);

    //printing the element of first vector after swapping
    cout<<"printing the first vector after swaping:";
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
//printing the after second vector after swapping
    cout<<"printing second vector after swapping:";
    for(int i=0;i<v2.size();i++)
    {
        cout<<v2[i]<<" ";
    }

}