#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
    char character;
    int integer;
    float floatingPoint;
    cout << "Enter a character: ";
    cin >> character;
    cout << "Enter an integer: ";
    cin >> integer;
    cout << "Enter a floating-point number: ";
    cin >> floatingPoint;
    cout << "\nFormatted Table:" << endl;
    cout << left << setw(15) << "Character" 
         << setw(15) << "Integer" 
         << setw(15) << "Floating-point" << endl;
    cout << string(45, '-') << endl;
    cout << left << setw(15) << character 
         << setw(15) << integer 
         << fixed << setprecision(2) << setw(15) << floatingPoint << endl;

    return 0;
}
