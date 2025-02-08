//Q1 Number Manipulation and Prime Numbers
#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

// Function to find the next prime number
int nextPrime(int num) {
    while (true) {
        num++;
        if (isPrime(num)) return num;
    }
}

// Function to find and print all factors of a number
void printFactors(int num) {
    cout << "Factors of " << num << " are: ";
    for (int i = 1; i <= num; ++i) {
        if (num % i == 0) cout << i << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }
    
    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
        cout << "The next prime number is " << nextPrime(n) << "." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
        printFactors(n);
    }
    
    return 0;
}
