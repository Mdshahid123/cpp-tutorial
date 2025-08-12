#include<iostream>
using namespace std;

int* p = new int(25);
float* q = new float(75.25);

// Custom data type
class cust
{
    public:

	int x;
	cust(int a)
	{
        x=a;
	}
	cust()
	{
	}
};

int main()
{
	cust* var1 = new cust;
	//OR
	var1 = new cust();
	//OR
	cust* var = new cust(25);
	cout<<*p<<endl;

	return 0;
}
