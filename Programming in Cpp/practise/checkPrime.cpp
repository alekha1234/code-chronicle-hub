//  check that a number n is prime or not
#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : " ;
    cin >> n;
    
    bool isPrime=true;
    for (int i=2; i*i<n; i++){
        if (n % i == 0){
            isPrime=false;
            break;
        }
    }

    if (isPrime==true){
        cout << n << " is a prime Number";
        
    } else {
        cout << n << " is a non-prime Number";
    }

    return 0;
}   