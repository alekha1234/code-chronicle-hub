// import the required libraries

#include <iostream>
#include <string>
using namespace std;

// create a class of named Teacher
class Teacher {
    // properties/attribute of the class
public:
    string name;
    string subject;
    string dept;
    double salary;

    // Non-Parameterized constructor to initialize the properties of the class
    Teacher() {
        cout << "------------ This is Non-Parameterized Constructor ------------ " << endl;
        name = "Gujuri Alekha";
        subject = "Physics";
        dept = "Science";
        salary = 50000.0;
    };

    // // Parameterized constructor to initialize the properties of the class
    // Teacher(string n, string s, string d, double sal){
    //     cout << endl << "------------ This is Parameterized Constructor ------------ " << endl;
    //     name = n;
    //     subject = s;
    //     dept = d;
    //     salary = sal;
    // }

    // Parameterized constructor to initialize the properties of the class using This pointer
    Teacher(string name, string subjet, string dept, double salary){
        cout << endl << "------------ Parameterized Constructor with `This->prop` pointer ------------ " << endl;
        this->name = name;
        this->subject = subject;
        this->dept = dept;
        this->salary = salary;
    }
    

    // method to get the details of the teacher ( method / member function )
    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "subject: " << subject << endl;
        cout << "Department: " << dept << endl;
        cout << "Salary: " << salary << endl;
    }
};

// main function
int main()
{
    // create an object of the class Teacher with non parameterized constrctor
    // Teacher t1;
    // t1.getInfo();

    // create an object of the class Teacher with parameterized constrctor
    Teacher t2("Alekha", "Data Science", "Product Engeneering", 50000.00);
    // t2.getInfo();

    Teacher t3(t2); // default copy constructer is called
    t3.getInfo();

    return 0;
}