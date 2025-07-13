// create a right aligned repeating number triangle pattern like below
//  1111
//   222
//    33
//     4

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // outer loop to print n rows
    for (int i=0; i<n; i++){

        // inner loop 1 to print n Spaces
        for (int j=0; j<i; j++){
            cout << " ";
        }

        //  inner loop 2 , to print the repeated numbers for n-i times on th esame row
        for (int k=0; k<n-i; k++){
                cout << i+1;
            }

        //  to jump a new row after printing both space and numbers
        cout << endl;
    }

    return 0;
}