#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    int matrix[n][n];
    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int primarysum = 0, secondarysum = 0;

    for (int i = 0; i < n; i++) {
        primarysum += matrix[i][i];            // Primary diagonal: elements at (i, i)
        secondarysum += matrix[i][n - 1 - i];  // Secondary diagonal: elements at (i, n-1-i)
    }
    if (n % 2 == 1) {
        secondarysum -= matrix[n / 2][n / 2];
    }
    cout << "Sum of primary diagonal: " << primarysum << endl;
    cout << "Sum of secondary diagonal: " << secondarysum << endl;

    return 0;
}
