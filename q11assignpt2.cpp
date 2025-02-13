#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[rows][cols];

    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int maxRowSum = 0, maxRowIndex = 0;

    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        if (i == 0 || rowSum > maxRowSum) {
            maxRowSum = rowSum;
            maxRowIndex = i;
        }
    }

    cout << "Row with the maximum sum is: Row " << maxRowIndex + 1 << " (0-based index: " << maxRowIndex << ")" << endl;
    cout << "Maximum row sum: " << maxRowSum << endl;

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;
    cout << "Enter number of columns: ";
    cin >> cols;

    int matrix[rows][cols];

    cout << "Enter the matrix elements:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    int maxRowSum = 0, maxRowIndex = 0;

    for (int i = 0; i < rows; i++) {
        int rowSum = 0;
        for (int j = 0; j < cols; j++) {
            rowSum += matrix[i][j];
        }
        if (i == 0 || rowSum > maxRowSum) {
            maxRowSum = rowSum;
            maxRowIndex = i;
        }
    }

    cout << "Row with the maximum sum is: Row " << maxRowIndex + 1 << " (0-based index: " << maxRowIndex << ")" << endl;
    cout << "Maximum row sum: " << maxRowSum << endl;

    return 0;
}
