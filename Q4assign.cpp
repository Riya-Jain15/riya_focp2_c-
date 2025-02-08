#include <iostream>
using namespace std;

void Spiral(int n) {
    int arr[n][n];
    int num = 1, top = 0, left = 0, bottom = n - 1, right = n - 1;

    while (num <= n * n) {
        for (int i = left; i <= right; i++) arr[top][i] = num++;
        top++;
        for (int i = top; i <= bottom; i++) arr[i][right] = num++;
        right--;
        for (int i = right; i >= left; i--) arr[bottom][i] = num++;
        bottom--;
        for (int i = bottom; i >= top; i--) arr[i][left] = num++;
        left++;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter matrix size: ";
    cin >> n;
    Spiral(n);
    return 0;
}
