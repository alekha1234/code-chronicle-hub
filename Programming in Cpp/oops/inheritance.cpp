// import the required libraries

#include <iostream>
#include <string>
using namespace std;

// Create  a parent Class
class Person{
    public:
    string name;
    int age;

    // Parent Class constructor
    Person(){
        cout << "============ This is Parent Class ============" << endl;
    };

};



// Create a child class
class Student : public Person{
    public:
    int rollNo;

    // Child class constructor
    Student(){
        cout << "============ This is Child Class, which Inheritaed the property of Parent Class ============" << endl;
    };


    // method to get the details of the teacher ( method / member function )
    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll NO: " << rollNo << endl;
    };
};



// Create the main function

int main(){
    Student s1;
    s1.name = "Alekha";
    s1.age = 24;

    s1.getInfo();

    return 0;

}