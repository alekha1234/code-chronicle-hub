// create a left aligned consucative number triangle / floyd's troiangle pattern like below
// A 
// B C 
// D E F 
// G H I J
// K L M N O

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

    // initialize a Cheracter
    char ch = 'A';

    // outer loop to print n rows
    for (int i=1; i<=n; i++){

        //  inner loop to print the pattern in each row
        for (int j=i; j>=1; j--){
            cout << ch << " ";

            // increase the number by 1 as we want consecutive numbers
            ch += 1;
        }
        cout << endl;
    }

    return 0;
}