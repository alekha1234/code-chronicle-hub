#include<iostream>
using namespace std;
class student {
public:
//default constructor
	student() {
		cout<<"Default constructor called"<<endl;
	}
//Parameterized constructor
	student(string name, int age)
	{
		cout<<"Parameterized constructor called"<<endl;
		cout<<"Name :"<<name<<endl;
		cout<<"Age :"<< age <<endl;
	}
};
int main() {
	student s1; //Default constructor
	student s2("Alice", 21); //Parameterized constructor
	student s3("Bob", 19); //Parameterized constructor
	student s4("Anil", 21); //Parameterized constructor
	return 0;
}