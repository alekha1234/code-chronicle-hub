// create a left aligned consucative number triangle / floyd's troiangle pattern like below
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15

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

    // initialize a number
    int num = 1;

    // outer loop to print n rows
    for (int i=1; i<=n; i++){

        //  inner loop to print the pattern in each row
        for (int j=i; j>=1; j--){
            cout << num << " ";

            // increase the number by 1 as we want consecutive numbers
            num += 1;
        }
        cout << endl;
    }

    return 0;
}