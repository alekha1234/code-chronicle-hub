// //  Check a number is even or odd
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     if(n % 2 == 0){
//         cout << "Number " << n << " is even";
//     } else{
//         cout << "Number " << n << " is odd";
//     }

//     return 0;

// }




// //  print that auser input number is +ve, -ve or zero
// #include<iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     if(n > 0){
//         cout << "Number " << n << " is +ve";
//     } else if(n < 0){
//         cout << "Number " << n << " is -ve";
//     } else{
//         cout << "Number " << n << " is Zero";
//     }
//     return 0;

// }




// //  Check the student's grade
// #include<iostream>
// using namespace std;

// int main(){
//     int mark;
//     cout << "Enter your marks: ";
//     cin >> mark;

//     if(mark >= 90){
//         cout << "Your Grade is A+.";
//     } else if (mark >= 80 & mark <=90){
//         cout << "Your Grade is B+";
//     } else if (mark >= 60 & mark < 80){
//         cout << "Your Grade is B2";
//     } else if (mark >= 45 & mark < 60){
//         cout << "Your Grade is C";
//     } else if (mark >= 35 & mark < 45){
//         cout << "Your Grade is C";
//     } else{
//         cout << "Your Grade is F & your are Failed...";
//     }

//     return 0;

// }




// //  Check a Cheracter is uppercase or lowercase
// #include <iostream>
// using namespace std;

// int main(){
//     char ch;
//     cout << "Enter a Cheracter : ";
//     cin >> ch;

//     if (ch >= 'A' & ch <= 'Z'){
//         cout << ch << "--> is Uppar Case";
//     } else{
//         cout << ch << "--> is Lower Case";
//     }

//     return 0;
// }



//   Check a Cheracter is uppercase or lowercase using ascii values
#include <iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter a Cheracter : ";
    cin >> ch;

    if (ch >= 65 & ch <= 90){
        cout << ch << "--> is Uppar Case";
    } else{
        cout << ch << "--> is Lower Case";
    }

    return 0;
}