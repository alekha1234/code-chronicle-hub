// create a left align triangle pattern of Characters like below
// A
// BB
// CCC
// DDDD
// EEEEE

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
    
    // initialize a cheracter
    char ch = 'A';

    // outer loop to iterate the n numbers of rows
    for (int i=1; i<=n; i++){

        // Inner loop to output the Cheracter for j times in i th row
        for (int j=1; j<=i; j++){
            cout << ch;
        }

        // increase the character value after each row
        ch += 1;
        cout << endl;
    }


    return 0;
}