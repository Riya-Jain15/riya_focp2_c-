#include <iostream>
using namespace std;

int gcd(int num1, int num2) {
    if (num2 == 0) 
        return abs(num1);  
    return gcd(num2, num1 % num2); 
}

int main() {
    int a,b;
    cout << "Enter two numbers: ";
    cin >>a>>b;

    cout << "GCD of " <<a<< " and " <<b<< " is: " << gcd(a,b) << endl;

    return 0;
}
