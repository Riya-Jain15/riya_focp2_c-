#include <iostream>
using namespace std;

void Butterfly(int n) {
    // Upper half of the butterfly
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {// Print stars at left
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++) { // Print spaces
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {//print stars at right
            cout << "*";
        }
        cout << endl;
    }

    // Lower half of the butterfly
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {  // Print stars at left
            cout << "*";
        }
        for (int j = 1; j <= 2 * (n - i); j++) { // Print spaces
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {// Print stars at right
            cout << "*";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the butterfly pattern: ";
    cin >> n;

    Butterfly(n);

    return 0;
}
