#include <iostream>
#include <string>
using namespace std;
class ConvertTemp {
public:
	ConvertTemp(int celsius) {
		cout << "Celsius: " << celsius << endl;
		cout << "Fahrenheit: " << (celsius * 9 / 5) + 32 << endl;
	};
};

int main() {
	ConvertTemp c1(1);
}