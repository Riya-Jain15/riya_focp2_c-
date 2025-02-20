#include <iostream>
using namespace std;

int factorial(int n) {
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return -1; 
    }
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);  
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = factorial(num);
    if (result != -1)  
        cout << "Factorial of " << num << " is: " << result << endl;

    return 0;
}
