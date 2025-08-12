#include<iostream>
using namespace std;

class DynamicArray
{
    int *array;
    int size;
    int count;

 public:

    DynamicArray()
    {
        array = new int[1];
        size = 0;
        count = 1;
    }

    ~DynamicArray()
    {
        delete []array;
        size = 0;
        count = 0;
    }

    void insert(int a)
    {
        if( size == count)
            resize();
        size++;
        array[size-1] = a;
    }

    void insertAt(int index , int value)
    {
        resize();
        for(int i = size; i >=index; i--)
        {
            array[i] = array[i-1];
        }
        array[index] = value;
        size++;
    }
    int get(int i)
    {
        if( i >= size)
            cout<<"Index not present"<<endl;
        return array[i];
    }

    void resize()
    {
        int *temp = new int[2*size];
        for(int i = 0; i<size ; i++)
            temp[i] = array[i];

        count = 2*size;
        delete []array;
        array = temp;
    }

    void printArray()
    {
        for(int i=0; i<size ; i++)
        {
            cout<<array[i]<<" ";
        }
        cout<<endl;
    }

    int getSize()
    {
        return size;
    }

    int getCount()
    {
        return count;
    }
};

int main()
{
    DynamicArray a;
    a.insert(2);
    a.insert(4);
    a.insert(6);
    a.insert(8);
    a.insert(10);
    a.insertAt(2,5);
    a.printArray();
    cout<<"Array Size = "<<a.getSize()<<" and count = "<<a.getCount()<<endl;
    return 0;
}
