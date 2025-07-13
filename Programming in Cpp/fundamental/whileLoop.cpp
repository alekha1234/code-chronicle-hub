//  using while loop print the multiplication table of 9
#include <iostream>
using namespace std;

int main(){
    int n = 9;
    int i = 1;
    while (i <= 10){
        cout << n << " X " << i << " = " << n*i << endl;
        i ++;
    }
    return 0;
}