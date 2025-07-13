#include <iostream>
#include <string>
using namespace std;

// Function to take user's name and age, then print it
int main() {
    int age;
    string name;

    cout << "Enter your Name: ";
    cin >> name;
    cout << "Enter Age: ";
    cin >> age;

    cout << "Hi " << name << ", age " << age << "." << endl;

    return 0;
}