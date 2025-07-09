//stack using static array
#include<iostream>
#include<stdlib.h>
#define max 100

using namespace std;

class Stack
{
    private:
        int s[max];
        int top;
    public:
        Stack()
        {
            top = -1;
        }
        ~Stack()
        {
            top = -1;
        }
        void push(int value)
        {
            if(isStackFull())
            {
                cout<<"Stack Overflow"<<endl;
            }
            else
            {
                top++;
                s[top]=value;
            }
        }

        int isStackEmpty()
        {
            if(top == -1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

        int isStackFull()
        {
            if(top == max-1)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }

        int pop()
        {
            if(isStackEmpty())
            {
                cout<<"Stack Underflow"<<endl;
                return -1;
            }
            else
            {
                top--;
                return s[top+1];
            }
        }

        int Top()
        {
            if(isStackEmpty())
            {
                cout<<"Stack Underflow"<<endl;
                return -1;
            }
            else
            {
                return s[top];
            }
        }

        int Size()
        {
            return top+1;
        }
       void display ()  
      {  if(top==-1)
        {
           cout<<"underflow";
        }

        else
        {
            cout<<"printing the elements.....";
            for(int i = top; i>=0;i--)  
            {  
                cout<<"arr[i]"; 
            }  
        }
       
    }  
};

int main()
{
    int choice;
    Stack s;
    while(choice != 6)
    {
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Get Top"<<endl;
        cout<<"4. Get Size"<<endl;
        cout<<"5. display"<<endl;
        cout<<"6. Exit"<<endl;

        cout<<"Enter your choice "<<endl;
        cin>>choice;

        switch(choice)
        {
            case 1:
                {
                    int value;
                    cout<<"Enter a Number : "<<endl;
                    cin>>value;
                    s.push(value);
                    break;
                }
            case 2:
                {
                    int value = s.pop();
                    cout<<"Deleted value is "<<value<<endl;
                    break;
                }
            case 3:
                {
                    cout<<"Top of the Stack is "<<s.Top()<<endl;
                    break;
                }
            case 4:
                {
                    cout<<"Size of Stack is "<<s.Size()<<endl;
                    break;
                }
            case 5:
               { 
                  s.display();
                  cout<<endl;
                  break;
               }

            case 6:
                {
                    exit(0);
                }
        }
    }
    return 0;
}
