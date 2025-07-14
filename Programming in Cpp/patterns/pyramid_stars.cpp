// print a pyramid patterns of stars like below
//       *
//      ***
//     *****
//    *******
//   *********

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;

    // Outer loop to print 'n' rows
    for (int i = 0; i < n; i++) {

        // Step 1: Print spaces to center the stars
        // Number of spaces = n - i - 1
        for (int j = n - i; j >= 0; j--) {
            cout << " ";
        }

        // Step 2: Print left half of the stars (including center star)
        // Number of stars = i + 1
        for (int j = 1; j <= i + 1; j++) {
            cout << "*";
        }

        // Step 3: Print right half of the stars
        // Number of stars = i (one less than left side to avoid double printing center star)
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }

        // Move to the next line after each row
        cout << endl;
    }

    return 0;
}
