#include<iostream>

int main()
{
    int a[5]={1,7,9,6,8};
    std::cout<<a[12];
}

//there is a bound cheking in c++ so if we insert the element beyond the size of array then there will be show err "to many intializer"
//if we dont't entialize the any type variable then it contain garbage value
//if we intiage then rest of variable contain 0

int nums[]={1,5,7,9,15};
target=16;