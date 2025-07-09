//write a function using default argument that is able to add 2 or 3 number

//note dafalut argument is also a example of function overloading bcz we here single entity doing multiple things .i.e it work for two parameter as well for three parameter

//but we have to make a single function bcz bcz for diffrent argument we have to do same task that is add a number 

#include<iostream>
using namespace std;
int add(int a,int b,int c=0)
{
    int sum=a+b+c;
    return sum;
}

int main() {
    int num1, num2, num3;
    int count;

    cout << "How many numbers do you want to add? (2 or 3): ";
    cin >> count;

    if (count == 2) {
        cout << "Enter two numbers: ";
        cin >> num1 >> num2;
        cout << "Addition of given numbers is: " << add(num1, num2) << endl;
    } 
    else if (count == 3) {
        cout << "Enter three numbers: ";
        cin >> num1 >> num2 >> num3;
        cout << "Addition of given numbers is: " << add(num1, num2, num3) << endl;
    } 
    else {
        cout << "Invalid input! Please enter 2 or 3." << endl;
    }

    return 0;
}

