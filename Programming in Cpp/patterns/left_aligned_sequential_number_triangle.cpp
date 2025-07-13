// create a left aligned sequential number triangle pattern like below
// 1
// 12
// 123
// 1234
// 12345

#include <iostream>
using namespace std;

int main(){
        int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 0){
        cout << "Enter a Valid Positive Number ";
        return 1;  // to exit the program
    }

    // Outer loop to iterate the n number of rows
    for (int i=1; i<=n; i++){    

        // initialize a number for each iteration
        int num = 1;

        // inner loop to print the value of num for j times
        for (int j=1; j<=i; j++){
            cout << num;
            num = num + 1;
        }
        cout << endl;
    }


    return 0;
}