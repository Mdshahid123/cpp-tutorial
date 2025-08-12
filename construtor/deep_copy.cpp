//DEEP COPY
//What is it?
//A deep copy not only copies values but also allocates separate memory and copies the actual content. So both objects are fully independent.
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
     Student(Student &s)
     {  
         age=s.age;
         name = new char[strlen(s.name) + 1]; // +1 for null terminator
         strcpy(name,s.name);
     }
     void setAge(int A)
     {
        age=A;

     }

     void setName(string N )//string N("shahid") or string N="shahid"
     {   delete[] name; // Free previously allocated memory (if any)
         name = new char[N.length() + 1]; // dynamic memory allocation
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
     Student s2(s1);//default compiler copy constructor will be excute by defalut shallow copy happen
    

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


// Before change:
// Name: Shahid
// Name: Shahid

// After change:
// Name: Aman
// Name: Shahid

//conclution

// What Happens:
// s1.name and s2.name point to separate memory after s2.setName(...).

// When the program ends:

// ~Student() is called for s2 → deletes s2.name

// ~Student() is called for s1 → deletes s1.name

// ✅ No double delete → ✅ No crash.

// ❌ But If You Don't Set New Memory for s2:
// If you don't set a new name for s2, then both s1 and s2 will share the same memory. So when the destructor is called for both:

// The first one deletes the shared memory.

// The second one tries to delete already freed memory → 💥 Crash or undefined behavior

