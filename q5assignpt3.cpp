#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n, reversed = 0, digit;
    if (n < 0) return false;

    while (n > 0) {
        digit = n % 10;         
        reversed = reversed * 10 + digit; 
        n /= 10;                  
    }

    return original == reversed;   
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPalindrome(num)) {
        cout << num << " is a palindrome." << endl;
    } else {
        cout << num << " is not a palindrome." << endl;
    }

    return 0;
}
