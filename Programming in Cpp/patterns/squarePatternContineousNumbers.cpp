// // create a program that will create a square pattern with Char like below
// // 1 2 3 
// // 4 5 6 
// // 7 8 9

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     if (n <= 0){
//         cout << "Enter a Valid Positive Number ";
//     }

//     int num = 1;
//     // outer loop for number of rows
//     for (int i=1; i<=n; i++){

//         // inner loop number of columns in each row
//         for (int j=1; j<=n; j++){
//             cout << num << " ";
//             num = num + 1;

//         }
//         cout << endl;
//     }

//     return 0;
// }




// create a program that will create a square pattern with Char like below
// A B C 
// D E F 
// G H I 

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n <= 0){
        cout << "Enter a Valid Positive Number ";
    }

    char ch = 'A';
    // outer loop for number of rows
    for (int i=1; i<=n; i++){

        // inner loop number of columns in each row
        for (int j=1; j<=n; j++){
            cout << ch << " ";
            ch = ch + 1;

        }
        cout << endl;
    }

    return 0;
}