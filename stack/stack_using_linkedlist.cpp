#include<iostream>
using namespace std;

//node class of linked list
class node
{   public:
    int data;
    node *next;
};

//stack class
class stack
{  
    private:
    node *top;
    int size;

    public:
    stack()
    {
        top=NULL;
        size=0;
    }
     //push function
     void push(int value)
     {
        node *newnode=new node();
        newnode->next=top;
        newnode->data=value;
        top=newnode;
        size++;
     }
    //display the elements of stack
    void display()
    {  
       if(top==NULL)
       {
         cout<<"underflow";
       }

       else
       {
            node *temp=top;
            while(temp!=NULL)
            {
                cout<<temp->data<<"->";
                temp=temp->next;
            }
            cout<<"NULL";
       }
       cout<<endl;

       
    }

    void pop()
    {
        if(size==0||top==NULL)
        {
            cout<<"under flow";
        }

        else
        {
            node *temp=top;
            top=top->next;
            delete temp;
            size--;
        }
    }

    //size of stack
    int size_stack()
    {
       return size;
    }

    //peek()
    int peek()
    {
        if(size==0||top==NULL)
        cout<<"under flow";
        else 
        return top->data;
    }
    //is empty
    bool is_empty()
    {
        if(top==NULL)
        return false;
        else
        return true;
    }



};

int main()
{   stack s;
    cout<<"size of stack before push:"<<s.size_stack()<<endl;;
    s.push(4);
    s.push(5);
    s.push(6);
    s.push(7);
    s.push(8);
    s.display();
    cout<<"size of stack after push:"<<s.size_stack()<<endl;
    s.pop();
    cout<<"size of stack after pop:"<<s.size_stack()<<endl;;
   s.display();
  cout<<"top of the stack is:"<<s.peek()<<endl;
}

