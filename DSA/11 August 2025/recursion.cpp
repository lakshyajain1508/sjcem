#include <iostream>
using namespace std;

// Simple Program
// int factorial(int n) {
//     int sum = 1;
//     for (int i = 1; i <= n; i++) {
//         sum *= i;
//     }
//     return sum;
// }

// Topic Recursion 
int factorial(int t){

    if(t == 0 || t == 1)
        return 1;
    else
        return t * factorial(t - 1);

};

int main(){   
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    int fact = factorial(n);
    cout << "Factorial of " << n << " is " << fact << endl;
    return 0;
}