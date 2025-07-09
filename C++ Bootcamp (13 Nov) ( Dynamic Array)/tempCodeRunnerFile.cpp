int main()
{
    DynamicArray arr; //it will create a array of intial size one in heap;
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);
    arr.push_back(6);
    cout<<"element of an array is:"<<arr.printArray()<<" ";
    return 0;
}