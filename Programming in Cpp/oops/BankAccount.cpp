#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
	string accountHolder;
	char accountHolderGender;
	int accountNumber;
	double balance;

public:
	BankAccount(string holder_name, char gender, int acc_number, int initialBalance) {
		accountHolder = holder_name;
		accountHolderGender = gender;
		accountNumber = acc_number;
		balance = initialBalance;

		cout << "Account Holder: " << accountHolder << endl;
		cout << "Account Holder Gender: " << accountHolderGender << endl;
		cout << "Account Number: " << accountNumber << endl;
		cout << "Balance: " << balance << endl;
	};
};

int main() {
	BankAccount account1("Alekha", 'M', 12345678, 10000);
	return 0;
}
