// create a left aligned reverse sequential number triangle pattern like below
// 1 
// 2 1
// 3 2 1
// 4 3 2 1
// 5 4 3 2 1

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

    // Outer loop to iterate the n number of rows
    for (int i=1; i<=n; i++){    

        // inner loop to print the value of j in decreasing order from i
        for (int j=i; j>=1; j--){
            cout << j << " ";
        }
        cout << endl;
    }


    return 0;
}