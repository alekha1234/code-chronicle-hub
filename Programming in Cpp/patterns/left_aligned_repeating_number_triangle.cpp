// create a left aligned repeating number triangle pattern like below
// 1
// 22
// 333
// 4444
// 55555

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

    // Outer loop to iterate the n numbers
    for (int i=1; i<=n; i++){    

        // inner loop to print the value of i for j times
        for (int j=1; j<=i; j++){
            cout << i;
        }
        cout << endl;
    }


    return 0;
}
