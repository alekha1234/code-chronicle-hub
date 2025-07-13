// create a triangle pattern like below
// * 
// * *
// * * *
// * * * *
// * * * * *

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

    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }


    return 0;
}