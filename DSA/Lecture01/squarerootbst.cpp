#include <iostream>

using namespace std;

double sqrtBinarySearch(double n, double precision = 0.00001) {
    if (n < 0) {
        return -1.0; 
    }
    if (n == 0 || n == 1) {
        return n;
    }

    double low = 0;
    double high = n;
    double mid;

    while ((high - low) > precision) {
        mid = low + (high - low) / 2;
        
        if (mid * mid > n) {
            high = mid;
        } else {
            low = mid;
        }
    }
    
    return low + (high - low) / 2;
}

int main() {
    double number;
    cout << "Enter a non-negative number: ";
    cin >> number;

    if (number < 0) {
        cout << "Cannot calculate the square root of a negative number." << endl;
    } else {
        double result = sqrtBinarySearch(number);
        cout << "The square root of " << number << " is approximately: " << result << endl;
    }

    return 0;
}