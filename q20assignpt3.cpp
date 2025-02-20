#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n < 0) {
        cout << "Fibonacci sequence is not defined for negative numbers." << endl;
        return -1;  
    }
    if (n == 0) return 0;  
    if (n == 1) return 1;

    return fibonacci(n - 1) + fibonacci(n - 2);  
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = fibonacci(num);
    if (result != -1)  
        cout << "Fibonacci number at position " << num << " is: " << result << endl;

    return 0;
}
