//  print a pyramid of pattern like below
//     1
//    121
//   12321
//  1234321
// 123454321

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;

    // outer loop to print n lines
    for (int i=0; i<n; i++){

        // inner loop 1 - to print n-i-1 spaces on left side
        for (int j=0; j<n-i-1; j++){
            cout << " ";
        }
        
        // inner loop 2 -- to print the value j on left side till i+1
        for (int j=1; j<=i+1; j++){
            cout << j;
        }

        // inner loop 3 --- to print the reverse numers fron i to 1 on right side
        for (int j=i; j>=1; j--){
            cout << j;
        }

        //  To end the current line
        cout << endl;
    }

    return 0;
}