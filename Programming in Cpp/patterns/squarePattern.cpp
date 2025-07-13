// // create a program that will create a square pattern with Number like below
// //  1 2 3 4
// //  1 2 3 4
// //  1 2 3 4
// //  1 2 3 4

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     if (n <= 0){
//         cout << "Enter a Valid Positive Number ";
//     }

//     // outer loop for number of rows
//     for (int i=1; i<=n; i++){

//         // inner loop number of columns in each row
//         for (int j=1; j<=n; j++){
//             cout << j << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



// // create a program that will create a square pattern with star like below
// //  * * * *
// //  * * * *
// //  * * * *
// //  * * * *

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     if (n <= 0){
//         cout << "Enter a Valid Positive Number ";
//     }

//     // outer loop for number of rows
//     for (int i=1; i<=n; i++){

//         // inner loop number of columns in each row
//         for (int j=1; j<=n; j++){
//             cout << "* ";
//         }
//         cout << endl;
//     }

//     return 0;
// }



// create a program that will create a square pattern with Char like below
// //  A B C D
// //  A B C D
// //  A B C D
// //  A B C D

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 0){
        cout << "Enter a Valid Positive Number ";
    }

    // outer loop for number of rows
    for (int i=1; i<=n; i++){
        char ch = 'A';

        // inner loop number of columns in each row
        for (int j=1; j<=n; j++){
            cout << ch << " ";
            ch = ch + 1;

        }
        cout << endl;
    }

    return 0;
}