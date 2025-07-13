// //  write a program to print the factorial of a number n

// #include <iostream>
// using namespace std;

// int main(){
//     int n;

//     cout << "Enter a number: ";
//     cin >> n;

//     int fact = 1;
//     for (int i=1; i<=n; i++){
//         fact = fact * i;
//     }
//     cout << "Factorial of " << n << " is: " << fact;
//     return 0;
// }


// Recursive function to calculate factorial of a number n
#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n <= 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n;
    cout << "Enter a non-negative integer: ";
    cin >> n;

    // Input validation
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 1;
    }

    long long result = factorial(n);
    cout << "Factorial of " << n << " is: " << result << endl;

    return 0;
}
