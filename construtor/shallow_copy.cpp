//A shallow copy copies the values of member variables as-is. If the class contains pointers, the pointer address is copied, not the data it points to. So both objects share the same memory for that pointer.

#include<iostream>
#include<cstring>
using namespace std;

class Student {
private:
     int age;
     char *name;
public:
//default constructor
     Student()
     {
        age=0;
        name=nullptr;
     }
//copy constructor(shallow copy)
     Student(Student &s)
     {
         age=s.age;
         name=s.name;
     }
     void setAge(int A)
     {
        age=A;

     }


     void setName(string N )//string N("shahid") or string N="shahid"
      {      if(name==nullptr)
             name=new char[N.length()+1];
             strcpy(name,N.c_str());//N.c_str() gives you a const char* that points to the first character of the null-terminated internal array inside the std::string.
    
     }

     void showinfo()
     {
        cout<<"name="<<name<<" "<<"and"<<" "<<"age="<<age;
     }
     

    ~Student() {
        delete[] name;
    }
};

int main() {
     Student s1;
     s1.setName("shahid");
     s1.setAge(24);
     Student s2(s1);//copy constructor will be excute
    

    cout << "Before change:\n";
    cout<<"student1:";
    s1.showinfo();
    cout<<endl;
    cout<<"student2:";
    s2.showinfo();

    s2.setName("Aman"); // This will change both s1 and s2!

    cout << "\nAfter change:\n";
    cout<<"student s1:";
    s1.showinfo();
    cout<<endl;
    cout<<"student s2:";
    s2.showinfo();// Affected due to shared memory (shallow copy)

    return 0;
}

//output
// Before change:
// Name: Shahid
// Name: Shahid

// After change:
// Name: Aman
// Name: Aman

// ❗ Problem:
// Both s1 and s2 point to the same memory.

// When s1 changes the name, it changes for s2 too.

// When destructors run, double deletion happens, leading to a crash.
