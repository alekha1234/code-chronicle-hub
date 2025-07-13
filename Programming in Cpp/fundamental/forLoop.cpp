// // write a function to print the multiplication table of a number n

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout << "Enter a number : ";
//     cin >> n;

//     for (int i=1 ; i <= n ; i++){
//         cout << n << " X " << i << " = " << n*i << endl;
//     }
//     return 0;
// }



//  calculate the sum of numbers from 1 to n

#include <iostream>
using namespace std;

int main(){

    int n, sum;
    cout << "Enter a number : ";
    cin >> n;

    sum = 0;
    for (int i = 1; i<=n ; i++){
        sum = sum+i;
    }

    cout << "The Sum of 1 to " << n << " is : " << sum;

    return 0;

}