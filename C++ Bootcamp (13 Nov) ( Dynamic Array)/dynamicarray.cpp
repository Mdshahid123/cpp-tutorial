#include<iostream>
using namespace std;
class DynamicArray
{
    private:
    int *array;
    int  capacity;
    int  size;

    public:
    DynamicArray(int intialcapacity=1)
    {    capacity=intialcapacity;
         array=new int[capacity];
         size=0;

    }
   void  push_back(int value)
    {    
        if(size==capacity)
        resize();
        array[size]=value;
        size++;
         
    }
    //we call the resize function when size==capacity so that we can make the array of double size

    void resize()
    {
       int *temp = new int[2*size];
        for(int i = 0; i<size ; i++)
            temp[i] = array[i];

        capacity = 2*size;
        delete []array;
        array = temp;
    }

    void printArray()
    {  
        cout<<"element of an array is:";
        for(int i=0; i<size ; i++)
        {
            cout<<array[i]<<" ";
        }
        cout<<",";
        cout<<"capacity="<<getcapacity()<<" and size="<<getsize();
        cout<<endl;
    }

    int getcapacity()
    {
        return capacity;
    }
    int getsize()
    {
        return size;
    }

    void Delete(int index)
    {   
        if(index>size-1||index<0)
        cout<<"invalid index"<<endl;
        else
        {  
           for(int i=index;i<size-1;i++)
           {
            array[i]=array[i+1];
           }
           size--;
        }
        
    }
    void insertpos(int index,int value)
    {
        array[index]=value;
    }

    void insertAfter(int index,int value)
    {     
        if(size==capacity)
        {
            resize();
        }
        int i;
         for( i=size-1;i>index;i--)
         {
            array[i+1]=array[i];
         }
         array[i+1]=value;
         size++;
    }

    void shrink_to_fit()
    {
        int *temp= new int[size];
        for(int i=0;i<size;i++)
        {
           temp[i]=array[i]; 
        }
        delete []array;
        array=temp;
        capacity=size;
    }

    // Get element at index
    int get(int index) {
        if (index >= 0 && index < size) {
            return array[index];
        }
        return -1;              // Return -1 if index is invalid
    }



};

int main()
{
    DynamicArray arr(4); //it will create a array of intial size one in heap;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.printArray();
    arr.Delete(1);
    arr.printArray();
    arr.shrink_to_fit();
    arr.printArray();
    arr.insertAfter(7,10);
    arr.printArray();
    cout<<"element at 3:"<<arr.get(3)<<endl;


    
 
    
    return 0;
}