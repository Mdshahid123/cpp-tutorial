//implementaion of an stack using dynamic array;
#include <iostream>
using namespace std;

class stack {
    int* arr;
    int length;
    int capacity;
    int top;

public:
    stack() {
        arr = new int[1];
        length = 0;
        capacity = 1;
        top = -1;
    }

    ~stack() {
        delete[] arr;  // Clean up allocated memory
    }

    void push(int value) {
        if (length == capacity)
            resize();
        arr[++top] = value;
        length++;
    }

    void resize() {
        capacity *= 2;
        int* newArr = new int[capacity];
        for (int i = 0; i < length; i++) {
            newArr[i] = arr[i];
        }
        delete[] arr;  // Free the old array
        arr = newArr;
    }

    int size()
    {
        return length;
    }

    int pop()
    {
        if(top==-1)
        cout<<"stack is underflow";
        else
        {
            
            cout<<arr[top]<<"is deleted";
            top--;
        }
    }
    int peek()
    {
        return arr[top];
    }
   int Capacity()
    {
        return capacity;
    }

    void display() const {
        for (int i =top; i>=0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
};

int main() {
    int choice;
    stack s;
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
                    cout<<"Enter the elements of stack : "<<endl;
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
               
             }
             case 4:
              {
                 cout<<"size of an stack is="<<s.size()<<" and capacity="<<s.Capacity();
                 cout<<endl;
                 break;
              }
            case 5:
               { 
                 cout<<"elements of an stack:";
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
