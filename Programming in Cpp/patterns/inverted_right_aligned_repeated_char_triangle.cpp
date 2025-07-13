// create a inverted right aligned repeating char triangle pattern like below
// AAAAA
//  BBBB
//   CCC
//    DD
//     E

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    char ch='A';
    // outer loop to print n rows
    for (int i=0; i<n; i++){

        // inner loop 1 to print n Spaces
        for (int j=0; j<i; j++){
            cout << " ";
        }

        //  inner loop 2 , to print the repeated numbers for n-i times on th esame row
        for (int k=0; k<n-i; k++){
                cout << ch;
            }

        ch += 1;    // increase the char value after one complete line
        cout << endl;   //  to jump a new row after printing both space and numbers
    }

    return 0;
}